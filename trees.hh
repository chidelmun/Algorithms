/*Binary search tree Interface*/
#ifndef _BSTREE_
#define _BSTREE_
template <class T> class BSTREE
{
	typedef struct node
	{
		T data;
		node* left;
		node* right;
	}NODE;

public:
	void insertNode(T val);
	BSTREE();
	~BSTREE();
private:
	node* createNode(T val);
	void insertNodePriv(node* ref, T val);

private:
	NODE *root;
	
};


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

