/*Here is a test program for our Binary search tree

compile it using g++ -o main tree.cc btree.h*/


#include <iostream>

#include "btree.h"

using namespace std;

int main(void){
	btree *tree = new btree(10);

	tree->insertNode(20);

	tree->insertNode(5);
return 0;

}