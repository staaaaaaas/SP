;golden-section
(define a 2)(define b 3)
(define (fun x)
 (let ((z(- x (/ 101) (/ 102) (/ e))))
  (-(+(exp z) (log z)) (* 10 z)))
)
 
(define eps 0.00001)
(define (golden-section-search a b)
 (let(
      (xmin(if(< a b)(golden-start a b)(golden-start b a )))
     )
     (newline)
     xmin
 )
)

(define (golden-start a b)
 (set! mphi(* 0.5(- 3(sqrt 5))))
 (let(
      (xa (+ a (* mphi(- b a))))
      (xb (- b (* mphi(- b a))))
     )
     (try a b xa (fun xa) xb (fun xb))
 )
)

(define mphi 0)

(define (try a b xa ya xb yb)
 (cond((<(abs (- a b))eps)(* (+ a b)0.5))
      (else (display "+")
          (cond
            ((< ya yb)(set! b xb)
                         (set! xb xa)
                         (set! yb ya)
                         (set! xa (+ a (* mphi(- b a))))
                         (try a b xa (fun xa) xb yb)
                )
                (else    (set! a xa)
                         (set! xa xb)
                         (set! ya yb)
                         (set! xb (- b (* mphi(- b a))))
                         (try a b xa ya xb (fun xb))
                )
          )
       )
 )
)

(define xmin 0)
(set! xmin(golden-section-search a b))
  (display"interval=\t[")
  (display a)
  (display" , ")
  (display b)
  (display"]\n")
  (display"xmin=\t\t")
   xmin
  (display"f(xmin)=\t")
  (fun xmin)

