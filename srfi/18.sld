;;;; Cyclone Scheme
;;;; https://github.com/justinethier/cyclone
;;;;
;;;; Copyright (c) 2014-2016, Justin Ethier
;;;; All rights reserved.
;;;;
;;;; This module implements the multithreading API from SRFI 18.
;;;;
(define-library (srfi 18)
  (import (scheme base))
  (export
    thread?
    make-thread
    thread-name
    thread-specific
    thread-specific-set!
    thread-start!
    thread-sleep!
    thread-yield!
    thread-terminate!
    current-thread
    ;; TODO: thread-join!

    mutex?
    make-mutex 
    mutex-lock! 
    mutex-unlock!
    ;; For now, these are not implemented:
    ;; mutex-name
    ;; mutex-specific
    ;; mutex-specific-set!
    ;; mutex-state

    condition-variable?
    make-condition-variable
    condition-variable-wait! ;; Non-standard
    condition-variable-signal!
    condition-variable-broadcast!
    ;; Not implemented yet:
    ;; (condition-variable-name condition-variable)          ;procedure
    ;; (condition-variable-specific condition-variable)      ;procedure
    ;; (condition-variable-specific-set! condition-variable obj) ;procedure

    ;; Time functions are not implemented here, see (scheme time) instead
   
    ;; Exceptions are not implemented here, r7rs exceptions are used instead

    ;; Non-standard functions:
    ->heap
    Cyc-minor-gc
  )
  (begin
    ;; Threading
    (define (thread? obj) 
      (and (vector? obj) 
           (> (vector-length obj) 0) 
           (equal? 'cyc-thread-obj (vector-ref obj 0))))

    (define (make-thread thunk . name)
      (let ((name-str (if (pair? name)
                          (car name)
                          "")))
        ;; Fields supported so far:
        ;; - type marker (implementation-specific)
        ;; - thunk
        ;; - internal thread id (implementation-specific)
        ;; - name
        ;; - specific
        (vector 'cyc-thread-obj thunk #f name-str #f)))

    (define (thread-name t) (vector-ref t 3))
    (define (thread-specific t) (vector-ref t 4))
    (define (thread-specific-set! t obj) (vector-set! t 4 obj))

    (define (current-thread)
      (let ((t (%current-thread)))
        (if (null? t)
            *primordial-thread*
            t)))

    (define *primordial-thread*
      (vector 'cyc-thread-obj #f #f "main thread" #f))

    (define-c %current-thread
      "(void *data, int argc, closure _, object k)"
      " gc_thread_data *td = (gc_thread_data *)data;
        return_closcall1(data, k, td->scm_thread_obj); ")

    (define (thread-start! t)
      ;; Initiate a GC prior to running the thread, in case
      ;; t contains any closures on the "parent" thread's stack
      (let* ((thunk (vector-ref t 1)) 
             (thread-params (cons t thunk)))
        (Cyc-minor-gc)
        (let ((mutator-id (Cyc-spawn-thread! thread-params)))
          (vector-set! t 2 mutator-id))))

    (define (thread-yield!) (thread-sleep! 1))
    (define-c thread-terminate!
      "(void *data, int argc, closure _, object k)"
      " Cyc_end_thread(data); ")
    ;; TODO: thread-join!
    ;; TODO: possible to do this using mutator ID to get the pthread_t ??

    (define-c thread-sleep!
      "(void *data, int argc, closure _, object k, object timeout)"
      " set_thread_blocked(data, k);
        Cyc_thread_sleep(data, timeout);
        return_thread_runnable(data, boolean_t); ")

    ;; Take a single object and if it is on the stack, return a copy
    ;; of it that is allocated on the heap. NOTE the original object
    ;; will still live on the stack, and will eventually be moved
    ;; itself to the heap if it is referenced during minor GC.
    (define-c ->heap
      "(void *data, int argc, closure _, object k, object obj)"
      " object heap_obj = copy2heap(data, obj);
        return_closcall1(data, k, heap_obj); ")
    ;; Trigger a minor garbage collection.
    ;; This is potentially useful to evacuate all objects from 
    ;; a thread's stack to the heap.
    (define-c Cyc-minor-gc
      "(void *data, int argc, closure _, object k)"
      " Cyc_trigger_minor_gc(data, k); ")

    ;; Mutexes
    (define-c mutex?
      "(void *data, int argc, closure _, object k, object obj)"
      " object result = Cyc_is_mutex(obj);
        return_closcall1(data, k, result); ")
    ;; 
    ;; Create a new mutex by allocating it on the heap. This is different than 
    ;; other types of objects because by definition a mutex will be used by
    ;; multiple threads, so no need to risk having the non-creating thread pick
    ;; up a stack object ref by mistake.
    ;; 
    (define-c make-mutex
      "(void *data, int argc, closure _, object k)"
      " int heap_grown;
        mutex lock;
        mutex_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = mutex_tag;
        lock = gc_alloc(gc_get_heap(), sizeof(mutex_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_mutex_init(&(lock->lock), NULL) != 0) {
          fprintf(stderr, \"Unable to make mutex\\n\");
          exit(1);
        }
        return_closcall1(data, k, lock); ")

    (define-c mutex-lock!
      "(void *data, int argc, closure _, object k, object obj)"
      " mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        set_thread_blocked(data, k);
        if (pthread_mutex_lock(&(m->lock)) != 0) {
          fprintf(stderr, \"Error locking mutex\\n\");
          exit(1);
        }
        return_thread_runnable(data, boolean_t); ")

    (define (mutex-unlock! mutex . opts)
      (cond
        ((null? opts)
         (Cyc-mutex-unlock! mutex))
        ((condition-variable? (car opts))
         (let ((cond-var (car opts)))
           (condition-variable-wait! cond-var mutex)
           (Cyc-mutex-unlock! mutex))) ;; Per SRFI, leave mutex unlocked
        (else
         (error "mutex-unlock! - unhandled args" mutex opts))))

    (define-c Cyc-mutex-unlock!
      "(void *data, int argc, closure _, object k, object obj)"
      " mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        if (pthread_mutex_unlock(&(m->lock)) != 0) {
          fprintf(stderr, \"Error unlocking mutex\\n\");
          exit(1);
        }
        return_closcall1(data, k, boolean_t); ")

    ;;;; Condition Variables
    (define-c condition-variable?
      "(void *data, int argc, closure _, object k, object obj)"
      " object result = Cyc_is_cond_var(obj);
        return_closcall1(data, k, result); ")
    ;; (make-condition-variable [name])                      ;procedure
    (define-c make-condition-variable
      "(void *data, int argc, closure _, object k)"
      " int heap_grown;
        cond_var cond;
        cond_var_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = cond_var_tag;
        cond = gc_alloc(gc_get_heap(), sizeof(cond_var_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_cond_init(&(cond->cond), NULL) != 0) {
          fprintf(stderr, \"Unable to make condition variable\\n\");
          exit(1);
        }
        return_closcall1(data, k, cond); ")
    (define-c condition-variable-wait!
      "(void *data, int argc, closure _, object k, object cond, object lock)"
      " Cyc_check_cond_var(data, cond);
        Cyc_check_mutex(data, lock);
        set_thread_blocked(data, k);
        if (pthread_cond_wait(
            &(((cond_var)cond)->cond),
            &(((mutex)lock)->lock)) != 0) {
          fprintf(stderr, \"Unable to wait for condition variable\\n\");
          exit(1);
        }
        return_thread_runnable(data, boolean_t); ")
    (define-c condition-variable-signal!
      "(void *data, int argc, closure _, object k, object cond)"
      " Cyc_check_cond_var(data, cond);
        if (pthread_cond_signal(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, \"Unable to signal condition variable\\n\");
          exit(1);
        }
        return_closcall1(data, k, boolean_t); ")
    (define-c condition-variable-broadcast!
      "(void *data, int argc, closure _, object k, object cond)"
      " Cyc_check_cond_var(data, cond);
        if (pthread_cond_broadcast(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, \"Unable to broadcast condition variable\\n\");
          exit(1);
        }
        return_closcall1(data, k, boolean_t); ")
))
