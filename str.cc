#include <iostream>
#include "str.h"

int  main(int argc, char const *argv[])
{
	str name("Dario Garnett");

	cout << name.length() << endl\
		 << "Printing .." << name[6]\
		 << endl;;
	/* code */
	return 0;
}