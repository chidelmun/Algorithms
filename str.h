#include <iostream>
#include <string>
using namespace std;

#ifndef _STR_
#define _STR_
	
	class str : public string
	{
	public:
		str(string s):string(s)
		{	
		}
		string operator<<(char ch);
		char operator[](int key);
		~str()
		{
		}
		
	};


char str::operator[](int key){
	if (key<0)
	{
		cout << "ERROR: Cannot take negative string Index" << endl;
	}
	else if (key > this->length())
	{
		cout << "Error: Upper limit exceeded\n";
	}
	else
		return this->at(key);
}

string str::operator<<(char ch){
	
}

class strExcept : public exception{
public:
	void what();

};

void strExcept::what(){
	cout << "String Exception cought\n check Usage of class" << endl;
}


#endif


