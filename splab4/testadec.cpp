#include <iostream>
#include <iomanip>
#include "fsm.h"
using namespace std;

int main(){
	tFSM Adec;


	addstr(Adec,0,"+",1);
	  	addstr(Adec,0,"-",1);
	  		addrange(Adec,1,'1','9',2);
	  		addrange(Adec,2,'0','9',2);

	  			addstr(Adec,2,".",3);
	  			addrange(Adec,3,'0','9',3);
	  			addstr(Adec,3,"E",4);
	  			addstr(Adec,3,"e",4);

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
	  	Adec.final(3);
	  	Adec.final(6);
	  	Adec.final(7);
	  	Adec.final(8);


  	cout << "*** aso Adec "
  		<< "size=" << Adec.size()
		<< " ***\n";
  	cout << endl;

  	while(true){
  		char input[81];
  		cout << ">";
  		cin.getline(input,81);
  		if(!*input) break;
  		int res = Adec.apply(input);
  		cout << setw(res?res+1:0) << "^"<< endl;
  	}
  	return 0;
}
