/*This is an Implementation of a generic class for a Binary Search tree
The tree is wrotten from scratch and can be modified to store any datatype
Feel free to use in and provide enhancements as it is developed in my course
of developing my Algorithmic skills and so the implementation is not the 
best available

@File 	:btree.h
@Author :Delveri Munang
		 University of Buea.
@Date 	:2015
*/
#include <iostream>
using namespace std;

class btree
{
	struct node{
		int data;
		node *left;
		node *right;

	};
public:
	btree();
	btree(int value);
	void insertNode(int value);
	int  searchNode(int value);
	void print();
	~btree();
private:

	node *root;
	
};

btree::btree(){
	root = NULL;
}

btree::btree(int value){
	root->data = value;
	root->left = NULL;
	root->right = NULL;
}

void btree::insertNode(int value){
	
	if (root == NULL)
	{
		root->data = value;
		root->left = NULL;
		root->right = NULL;
	}
	if (value < root->data)
	{
		root = root->left;
		insertNode(value);
	}
	else{
		root = root->right;
		insertNode(value);
	}
}

//Needs debugging of Algorithm.
int btree::searchNode(int value){
	int n;
	if (root->data = value)
	{
		return value;
	}
	else if (root->data < value)
	{
		root = root->left;
		searchNode(value);
	}
	else{
		root = root->right;
		searchNode(value);
	}

	return n;
}

void btree::print(){
	cout << root->data << endl;
	root = root->left;
	print();
}

/*Alternative Implementation of Btree*/

struct Node{
	int data;
	Node *left;
	Node *right;
};

Node *createTree(int value){
	Node *newNode = new Node;
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void printTree(Node *root){
	if(root = NULL){
		cout << "Tree is Empty:" << endl;
	}
	else{
		cout << root->data << endl;
		printTree(root->left);
		printTree(root->right);
	}
}