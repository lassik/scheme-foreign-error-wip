(define-library (errno)
  (import (scheme base))
  (export errno-number->symbol
          errno-number->message
          errno-symbol->number)
  (include "errors-errno-darwin.scm")
  (begin

    (define (errno-search key key-offset val-offset)
      (let ((n (truncate-quotient (vector-length errno-vector) 3)))
        (let binary-search ((l 0) (r (- n 1)))
          (and (<= l r)
               (let* ((m (truncate-quotient (+ l r) 2))
                      (k (vector-ref errno-vector (+ key-offset (* 3 m)))))
                 (cond ((< k key) (binary-search (+ m 1) r))
                       ((> k key) (binary-search l (- m 1)))
                       (else (vector-ref errno-vector
                                         (+ val-offset (* 3 m))))))))))

    (define (errno-number->symbol  number) (errno-search number 0 1))
    (define (errno-number->message number) (errno-search number 0 2))

    (define (errno-symbol->number symbol)
      (let ((n (vector-length errno-vector)))
        (let search ((i 0))
          (and (< i n)
               (if (eq? symbol (vector-ref errno-vector (+ i 1)))
                   (vector-ref errno-vector i)
                   (search (+ i 3)))))))))
