/*  aso2019   */
#include "mlisp.h"
double a = 2;
double b = 3;
double fun(double x);
double eps = 0.00001;
double golden__section__search(double a, double b);
double golden__start(double a, double b);
double mphi = 0;
double __aso2019__try(double a, double b, double xa, double ya, double xb, double yb);
double xmin = 0;
//________________ 
double fun(double x){
  { 
    double z = (x - (double(1) / 101) - (double(1) / 102) - (double(1) / e));
    return ((exp(z) + log(z)) - 10 * z);
  } 
}
double golden__section__search(double a, double b){
  { 
    double xmin = (((a < b)) ? golden__start(a, b) : golden__start(b, a));
    newline();
    return xmin;
  } 
}
double golden__start(double a, double b){
  mphi = 0.5 * (3 - sqrt(5));
  { 
    double xa = (a + mphi * (b - a));
    double xb = (b - mphi * (b - a));
    return __aso2019__try(a, b, xa, fun(xa), xb, fun(xb));
  } 
}
double __aso2019__try(double a, double b, double xa, double ya, double xb, double yb){
  return (abs((a - b)) < eps) ?
((a + b) * 0.5) : (display("+"), (ya < yb) ?
(b = xb, xb = xa, yb = ya, xa = (a + mphi * (b - a)), __aso2019__try(a, b, xa, fun(xa), xb, yb)) : (a = xa, xa = xb, ya = yb, xb = (b - mphi * (b - a)), __aso2019__try(a, b, xa, ya, xb, fun(xb))));
}
int main(){
 xmin = golden__section__search(a, b);
 display("interval=\t[");
 display(a);
 display(" , ");
 display(b);
 display("]\n");
 display("xmin=\t\t");
 display(xmin); newline();
 display("f(xmin)=\t");
 display(fun(xmin)); newline();
 std::cin.get();
 return 0;
}

