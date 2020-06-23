/*  aso2019   */
#include "mlisp.h"
double VARIANT = 1;
double LAST__DIGIT__OF__GROUP__NUMBER = 6;
double LARGEST__COIN = 50;
bool implication_Q(bool x_Q, bool y_Q);
double cc(double amount, double largest__coin);
double count__change(double amount);
double next__coin(double coin);
double GR__AMOUNT();
//________________ 
bool implication_Q(bool x_Q, bool y_Q){
  (1 == (!x_Q) ?
(1) : y_Q ?
(1) : (0));
}
double cc(double amount, double largest__coin){
  return( (((amount == (0))) ? (((largest__coin == 1)) ? 1 : (((!(largest__coin == (0)))) ? (cc(amount, next__coin(largest__coin)) + cc((amount - largest__coin), largest__coin)) : (0))) : ((((0) < amount)) ? (((!(largest__coin == (0)))) ? (cc(amount, next__coin(largest__coin)) + cc((amount - largest__coin), largest__coin)) : (0)) : (0))));
}
double count__change(double amount){
  return( cc(amount, LARGEST__COIN));
}
double next__coin(double coin){
  return( (coin == 50) ?
(15) : (coin == 15) ?
(10) : (coin == 10) ?
(2) : (coin == 2) ?
(1) : (0));
}
double GR__AMOUNT(){
  return( remainder((100 * LAST__DIGIT__OF__GROUP__NUMBER + VARIANT), 137));
}
int main(){
 display(" aso variant");
 display(VARIANT);
 newline();
 display(" 1-2-10-15-50");
 newline();
 display("count-change for 100 \t= ");
 display(count__change(100));
 newline();
 display("count-change for ");
 display(GR__AMOUNT());
 display(" \t= ");
 display(count__change(GR__AMOUNT()));
 newline();
 std::cin.get();
 return 0;
}

