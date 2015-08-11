#include <iostream>
#include "trees.hh"


int  main(int argc, char const *argv[])
{
	BSTREE* tree = new BSTREE(10);
	tree->insertNode(20);
	tree->insertNode(5);
	tree->printTree(tree->root);
	return 0;
}