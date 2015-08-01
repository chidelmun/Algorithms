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
	
	Node* root = NULL;

	root = insert(root,20);
	root = insert(root,15);
	root = insert(root,10);
	root = insert(root,30);
	root = insert(root,45);
	root = insert(root,5);
	root = insert(root,7);

	int item;
	cout << "Enter element to be searched..." << endl;
	cin >> item;
	if(search(root,item)==true){
		cout << "FOUND ITEM" << endl;
	}
	else 
		cout << "NOT FOUND" << endl;

	return 0;

}