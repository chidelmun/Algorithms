/*Binary search tree Interface*/
#include <iostream>
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
	BSTREE();
	~BSTREE();
private:
	node* createNode(int val);
	node* insertNodePriv(node* ref, int val);

private:
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

