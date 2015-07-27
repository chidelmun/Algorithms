/*Here is a test program for our Binary search tree

compile it using g++ -o main tree.cc btree.h
and run as ./tree:

The tree generated will have the following internal structure

				 10
				/  \
			   5	20
			  / \   / \
			nil nil nil nil


*/



#include <iostream>

#include "btree.h"

using namespace std;

int main(void){
	Node *tree = createTree(10);

	printTree(tree);



}