#include <iostream>
#include <string>
#include "str.h"

int  main(int argc, char const *argv[])
{
	str name("Dario Garnett");
	string user("Chidelmun");

	cout << name.length() << endl     \
		 << "Printing .." << name[atoi(argv[1])] << endl \
		 << "Printing .." << user[-5] \
		 << endl;
	/* code */

   cout << "Exception" << endl;
	try{
			throw strExcept();
		
	}catch(strExcept ex){
		ex.what();
	}
	return 0;
}