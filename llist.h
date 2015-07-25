#include <iostream>
using namespace std;

typedef struct node{
	int data;
	struct node *next;
}NODE;

NODE create(int value){
	NODE *newNode = new NODE;
	newNode->data = value;
	newNode->next = NULL;
	return *newNode;
}

NODE insert(NODE *ref, int value){
	NODE newNode = create(value);
	ref = &newNode;
	return *ref;	
}

void print(NODE *ref){
	while(ref->next != NULL){
		cout << ref->data << endl;
		ref = ref->next;
	}
}