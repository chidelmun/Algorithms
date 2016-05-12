/*This is an Implementation of a generic class for a Binary Search tree
The tree is wrotten from scratch and can be modified to store any datatype
Feel free to use in and provide enhancements as it is developed in my course
of developing my Algorithmic skills and so the implementation is not the 
best available

@File 	:btree.h
@Author :Delveri Munang
@Location		 University of Buea.
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
struct node{
	int data;
	node *left;
	node *right;
};

typedef struct node NODE;

class Btree{
public:
	Btree();
	Btree(int value);
	void insert();
	void search(int value);
	void print();
	void printLeft();
	void printRight();
	~Btree();

private:
	NODE *root;

};

Btree::Btree(){
	root = new NODE;
	root->data = 10;
	root->left = NULL;
	root->right = NULL;
}
Btree::Btree(int value){
	root = new NODE;
	root->data = value;
	root->left = NULL;
	root->right = NULL;
}

Btree::~Btree(){
	delete root;
}
//Dummy
void Btree::print(){
	if(root==NULL){
		cout << "Empty tree..." << endl;
	}
	else{
		cout << root->data << endl;
	}
}

void Btree::printLeft(){
	NODE *tmp = root;
	while(tmp != NULL){
		cout << tmp->data << endl;
		tmp = tmp->left;

	}
}

void Btree::printRight(){
	NODE *tmp = root;
	while(tmp != NULL){
		cout << "Value is :" << tmp->data << endl;
		tmp = tmp->right;
	}
}



/*Classic Implementation of BST in C++*/


struct Node{
	int data;
	Node *left;
	Node *right;
};

//Allocate memory for new tree node and return a node
Node *createNode(int value){
	Node *newNode = new Node();
	newNode->data = value;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//Takes a BST root node and and inserts a value into the tree
Node* insert(Node *root, int value){
	if(root==NULL){  //Tree is empty
		root = createNode(value);
		return root;
	}
	else if(value <= root->data){ //visit left child recursively
		root->left = insert(root->left, value);
	}else{
		root->right = insert(root->right, value); //visit right node recursively
	}
	return root;

}

/*Takes a BST root node and searches to see if tree contains value*/

bool search(Node* root, int value){
	if (root==NULL) // Tree is Empty
		return false;
	else if (root->data == value) //Search value is root element
		return true;
	else if (root->data <= value) // Search item is in left tree
		return search(root->left, value);
	else return search(root->right, value); //search item is in right tree

}
