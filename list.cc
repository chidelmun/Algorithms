#include "list.h"
#include <iostream>
using namespace std;

int main(void){
	list *myList = new list(10);
	cout << myList->getHead() << endl;
	myList->insert(20,myList);
	return 0;
}