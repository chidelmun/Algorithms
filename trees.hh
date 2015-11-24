/*Binary search tree Interface*/
#include <iostream>
using namespace std;
#ifndef _BSTREE_
#define _BSTREE_

typedef struct node
{
	int data;
	node* left;
	node* right;
}NODE;

class BSTREE
{

public:
	void insertNode(int val);
	void printTree(node* ref);
	bool lookUp(node *ref, int target);
	BSTREE(int val);
	~BSTREE();
private:
	node* createNode(int val);
	node* insertNodePriv(node* ref, int val);

public:
	NODE *root;
	
};

node* BSTREE::createNode(int val){
	node* newNode = new node;
	newNode->data = val;
	newNode->left = NULL;
	newNode->right= NULL;
	return newNode;
}

node* BSTREE::insertNodePriv(node* ref, int val){
	/*If tree is empty create root node*/
	if (ref == NULL)
	{
		return createNode(val);
	}
	else{
		if (val <= ref->data)
		{
			insertNodePriv(ref->left, val);
		}
		else{
			insertNodePriv(ref->right, val); 
		}
	}

}

void BSTREE::insertNode(int val){
	insertNodePriv(root, val);
}

BSTREE::BSTREE(int val){
	root = createNode(val);
	
}

//PreOrder printing
void BSTREE::printTree(node* ref){
	if (ref != NULL)
	{
		cout << ref->data << endl;
		printTree(ref->left);
		printTree(ref->right);
	}
}

bool BSTREE::lookUp(node *ref, int target){
	if(ref == NULL) return false;
	else if(ref->data == target) return true;
	else if(ref->data < target) lookUp(ref->left);
	else lookUp(ref->right);

}


// Helper Functions

struct node * createNode(int data){
	struct newNode = new node;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;	
}


struct node* insert(struct node *ref, int data){
	if(ref == NULL) return createNode(data);
	else{
		if(data < ref->data)
			ref->left = insert(node->left,data);
		else
			 ref->right = insert(node->right, data);
	return ref;	
	}
}

#endif
/*Red Black Tree Interface*/
#ifndef _RBTREE_
#define _RBTREE_


#endif
/*AVL Tree Interface*/
#ifndef _AVLTREE_
#define _AVLTREE_


#endif
/*Tries Interface*/
#ifndef _TRIE_
#define _TRIE_



#endif

