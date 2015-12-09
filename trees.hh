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

struct node* build123(){
	node* root = createNode(2);
	node->left = createNode(1);
	node->right = createNode(3);
	return root;
}

struct node* build123(){
	node* root = NULL;
	root = insert(root,2);
	root = insert(root ,1);
	root = insert(root,3);
	return root;
}

//compute number of nodes in tree.

int size(struct node* ref){
	if(ref == NULL) //Empty Tree
		return 0;
	else
		return size(ref->left) + 1 + size(ref->right);
}

// Find maximum depth of tree.

int max_depth(struct node* ref){
	if(ref == NULL)
		return 0;
	else{
		int left_depth = max_depth(ref->left);
		int right_depth = max_depth(ref->right);
		return left_depth > right_depth ? left_depth + 1 : right_depth + 1;
	}
}

/*Return minimum value in Bnary search tree.
Since tree is already sorted, no need to search all nodes
*/

int min_value(struct node* ref){
	struct node* current = ref;
	while(current != NULL){  // Visit left sub tree
		current = current->left;
	}
	return current->data;

}

void print_tree(struct node* ref){
	if(ref == NULL) return;
	print_tree(ref->left);
	cout << ref->data << endl;
	print_tree(ref->right);
}

void post_order_print_tree(struct node* root){
	if(root == NULL) return;
	post_order_print_tree(root->left);
	post_order_print_tree(root->right);
	cout << root->data << endl;
}

int has_path_sum(struct node* root, int sum){
	if(node == NULL){
		return (sum==0);
	}
	else{
		int sub_sum = sum - root->data;
		return(has_path_sum(root->left, sub_sum) || has_path_sum(root->right,sub_sum));
	}
}

void printPaths(struct node* node) { 
  int path[1000];
  printPathsRecur(node, path, 0); 
}

/* 
 Recursive helper function -- given a node, and an array containing 
 the path from the root node up to but not including this node, 
 print out all the root-leaf paths. 
*/ 
void printPathsRecur(struct node* node, int path[], int pathLen) { 
  if (node==NULL) return;

  // append this node to the path array 
  path[pathLen] = node->data; 
  pathLen++;

  // it's a leaf, so print the path that led to here 
  if (node->left==NULL && node->right==NULL) { 
    printArray(path, pathLen); 
  } 
  else { 
  // otherwise try both subtrees 
    printPathsRecur(node->left, path, pathLen); 
    printPathsRecur(node->right, path, pathLen); 
  } 
}

// Utility that prints out an array on a line. 
void printArray(int ints[], int len) { 
  int i; 
  for (i=0; i<len; i++) { 
    printf("%d ", ints[i]); 
  } 
  printf("\n"); 
} 

void mirror(struct node* node){
	if(node == NULL){
		return;
	}else{
		struct node* tmp;
		mirror(node->left);
		mirror(node->right);
		tmp = node->left;
		node->left = node->right;
		node->right = tmp;
	}
}
void double_tree(struct node* node){
	if(node == NULL){
		return;
	}else{
		struct node* old_left;
		double_tree(node->left);
		double_tree(node->right);
		old_left = node->left;
		node->left = createNode(node->data);
		node->left->left = old_left;
	}
}

int same_tree(struct node* tree_one, struct node* tree_two){
	if(tree_one == NULL and tree_two == NULL){
		return (true);
	}
	else{
		if(tree_one != NULL and tree_two != NULL){
			return ((tree_one->data == tree_two->data) and (same_tree(tree_one->left,tree_two->left)
				and (same_tree(tree_one->right, tree_two->right)));
		}
	}

}

int countTrees(int numKeys) {

  if (numKeys <=1) { 
    return(1); 
  } 
  else { 
    // there will be one value at the root, with whatever remains 
    // on the left and right each forming their own subtrees. 
    // Iterate through all the values that could be the root... 
    int sum = 0; 
    int left, right, root;

    for (root=1; root<=numKeys; root++) { 
      left = countTrees(root - 1); 
      right = countTrees(numKeys - root);

      // number of possible trees with this root == left*right 
      sum += left*right; 
    }

    return(sum); 
  } 
}

int isBST2(struct node* node) { 
  return(isBSTUtil(node, INT_MIN, INT_MAX)); 
}
/* 
 Returns true if the given tree is a BST and its 
 values are >= min and <= max. 
*/ 
int isBSTUtil(struct node* node, int min, int max) { 
  if (node==NULL) return(true);

  // false if this node violates the min/max constraint 
  if (node->data<min || node->data>max) return(false);

  // otherwise check the subtrees recursively, 
  // tightening the min or max constraint 
  return 
    isBSTUtil(node->left, min, node->data) && 
    isBSTUtil(node->right, node->data+1, max) 
  ); 
} 
 


#endif
/*Red Black Tree Interface*/
#ifndef _RBTREE_
#define _RBTREE_

// Useful Variables and structures.

enum colors{red,black};

template <class T> struct node{
	T data;
	template <class T> struct node* left;
	template <class T> struct node* right;
	enum color{red, black};
};

// Supplementary interface

struct rbt_node{
	int data;
	struct rbt_node* left;
	struct rbt_node* right;
	enum color{red,black};
};


#endif
/*AVL Tree Interface*/
#ifndef _AVLTREE_
#define _AVLTREE_


#endif
/*Tries Interface*/
#ifndef _TRIE_
#define _TRIE_



#endif

