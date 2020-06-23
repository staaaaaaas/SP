#ifndef LEXER_H
#define LEXER_H
#include "baselexer.h"
//********************************************
//*        Developed by  aso		     *
//*             (c)  2019                    *
//********************************************
class tLexer:public tBaseLexer{
public:
// персональный код разработчика
 std::string Authentication()const{
                     return "aso"
                +std::string("2019");}
//конструктор
 tLexer():tBaseLexer(){
//создать автоматы:

//  ноль Azero
    addstr  (Azero,0,"+-", 2);
    addstr  (Azero,0,"0",  1);
    addstr  (Azero,2,"0",  1);
  Azero.final(1);

//________________________________________

// число Adec
  addstr(Adec,0,"+",1);
  	addstr(Adec,0,"-",1);
  		addrange(Adec,1,'1','9',2);
  		addrange(Adec,2,'0','9',2);

  			addstr(Adec,2,".",3);
  			addrange(Adec,3,'0','9',9);
  			addrange(Adec,9,'0','9',9);
  			addstr(Adec,9,"E",4);
  			addstr(Adec,9,"e",4);

  				addstr(Adec,4,"+",5);
  				addstr(Adec,4,"-",5);
  				addrange(Adec,5,'0','9',6);
  				addrange(Adec,6,'0','9',6);

  				addrange(Adec,4,'0','9',7);
  				addrange(Adec,7,'0','9',7);

  			addstr(Adec,2,"E",4);
  			addstr(Adec,2,"e",4);

  		addstr(Adec,1,"0",8);

  	addrange(Adec,0,'1','9',2);

  	addstr(Adec,0,"0",8);

  		addstr(Adec,8,".",3);

  		addstr(Adec,8,"E",4);
  		addstr(Adec,8,"e",4);

    Adec.final(2);
  	Adec.final(6);
  	Adec.final(7);
  	Adec.final(9);
//________________________________________

// идентификатор Aid
    addrange(Aid,0,'a','z',1);
    addrange(Aid,0,'A','Z',1);
    addstr(Aid,0,"!",1);

    	addrange(Aid,1,'a','z',1);
    	addrange(Aid,1,'A','Z',1);
    	addrange(Aid,1,'0','9',1);
    	addstr(Aid,1,"!",1);
    	addstr(Aid,1,"-",2);

    		addrange(Aid,2,'a','z',1);
    	    addrange(Aid,2,'A','Z',1);
    	    addrange(Aid,2,'0','9',1);
    	    addstr(Aid,2,"!",1);
    	    addstr(Aid,2,"?",4);
    	    addstr(Aid,2,"-",3);
    	    addrange(Aid,3,'a','z',1);
    	    addrange(Aid,3,'A','Z',1);
    	    addrange(Aid,3,'0','9',1);
    	    addstr(Aid,3,"!",1);
    	    addstr(Aid,3,"?",4);

    	addstr(Aid,1,"?",4);

    addstr(Aid,0,"?",4);

    	addrange(Aid,4,'a','z',1);
        addrange(Aid,4,'A','Z',1);
        addrange(Aid,4,'0','9',1);
        addstr(Aid,4,"!",1);
        addstr(Aid,4,"-",2);
        addstr(Aid,4,"?",4);



  Aid.final(1);
  Aid.final(2);
  Aid.final(3);
//________________________________________

// идентификатор предиката Aidq
    addrange(Aidq,0,'A','Z',1);
    addrange(Aidq,0,'a','z',1);
    addstr(Aidq,0,"!",1);
    addstr(Aidq,0,"-",1);

    	addrange(Aidq,1,'A','Z',1);
        addrange(Aidq,1,'a','z',1);
        addrange(Aidq,1,'0','9',1);
        addstr(Aidq,1,"!",1);
        addstr(Aidq,1,"-",1);
        addstr(Aidq,1,"?",2);

    addstr(Aidq,0,"?",2);

    	addrange(Aidq,2,'A','Z',1);
        addrange(Aidq,2,'a','z',1);
        addrange(Aidq,2,'0','9',1);
        addstr(Aidq,2,"!",1);
        addstr(Aidq,2,"-",1);

    Aidq.final(2);
}
};
#endif

