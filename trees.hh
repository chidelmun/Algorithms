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

