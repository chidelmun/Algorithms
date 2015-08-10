/*Binary search tree Interface*/
#ifndef _BSTREE_
#define _BSTREE_

typedef struct node
	{
	T data;
	node* left;
	node* right;
}NODE;

template <class T> class BSTREE
{

public:
	void insertNode(T val);
	BSTREE();
	~BSTREE();
private:
	node* createNode(T val);
	node* insertNodePriv(node* ref, T val);

private:
	NODE *root;
	
};

node* BSTREE::createNode(T val){
	node* newNode = new node;
	newNode->data = T;
	newNode->left = NULL;
	newNode->right= NULL;
	return newNode;
}

node* BSTREE::insertNodePriv(node* ref, T val){
	/*If tree is empty create root node*/
	if (ref == NULL)
	{
		return createNode(val);
	}
	else{
		if (T <= ref->value)
		{
			insertNodePriv(ref->left, val);
		}
		else{
			insertNodePriv(ref->right, val);
		}
	}

}

void BSTREE::insertNode(T val){
	insertNodePriv(val);
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

