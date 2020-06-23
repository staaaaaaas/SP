/*  aso2019   */
#include "mlisp.h"
double even__bits(double n);
double odd__bits(double n);
double display__bin(double n);
double report__results(double n);
double dd = 11;
double mm = 3;
double yyyy = 2000;
//________________ 
double even__bits(double n){
  
	return ((n == 0) ? (1) : ((((remainder((n, 2) == 0)) ? even__bits((quotient((n, 2)) : odd__bits((quotient((n, 2))));
}
double odd__bits(double n){
	return (n == 0) ? (0) : (((remainder((n, 2) == 0) ? (odd__bits((quotient((n, 2))) : (even__bits((quotient((n, 2));
}
double display__bin(double n){
display(remainder((n, 2));
  	return (((n == 0)) ? 0 : display__bin((quotient((n, 2)));
}
double report__results(double n){
display("Happy birthday to you!\n\t");
  display(n);
  display(" (decimal)\n\t");
  display__bin((n);
  display("(reversed binary)\n");
  display("\teven?\t");
  ((even__bits((n) == 1) ? (display("yes"), 1) : (display("no"), 0);
  newline();
  display("\todd?\t");
  ((odd__bits((n) == 1) ? (display("yes"), 1) : (display("no"), 0);
  newline();
  	return 0;
}
int main(){
 display(report__results(((dd * 1000000 + mm * 10000 + yyyy))); newline();
std::cin.get();
 return 0;
}

