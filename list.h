/*Here is an inmplementation of the singly linked list. This Implementation is
non generic and supports Integers only. Feel free to use the container 
 in your projects modifying it to meet your needs
@file 	:list.h
@Author	:Delveri Munang
@Date 	:21/07/2015
@Project:Data structures and Algorithms in C++
		 University of Buea, Cameroon.

 */
#include <iostream>
using namespace std;

 struct node{
	int value;
	struct node* next;
};

typedef struct node NODE;

class list{
private:
	NODE firstNode;
public:
	list(int data);
	void insert(int value);
	void remove();
	void print();
	inline int getHead(){
		return firstNode.value;
	}


};

list::list(int data){
	NODE *newNode = new NODE;
	newNode->value = data;
	newNode->next = NULL;
	firstNode = *newNode;

}
void list::insert(int value){
	NODE tmp = firstNode;
	if (tmp.next)
	{
		/* code */
	}

}
void list::remove(){

}

void list::print(){
	for (NODE *n = &firstNode; n->next != NULL; )
	{
		cout << n->value << endl;
		n = n->next;
	}
}


