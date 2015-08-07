#include <iostream>
#include <string>
using namespace std;

#ifndef STR
#define STR
	
	class str : public string
	{
	public:
		str();
		string operator<<(char ch);
		char operator[](int key);
		~str();
		
	};



#endif