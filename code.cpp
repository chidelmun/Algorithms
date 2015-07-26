#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct node{
	int data;
	struct node *next;
};

void insertNode(struct node **head, int value){
	struct node *newNode = new struct node;
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
}

void print(struct node *head){
	struct node *tmp = head;
	while(tmp != NULL){
		cout << tmp->data << endl;
		tmp = tmp->next;
	}
}

/*Prints a linked list in reverse order*/
void rprint(struct node *head){
	struct node *tmp = head;
	while(tmp->next != NULL){

	}
}


int main(int c, char **y){

	struct node *head = new node;
	head-> data = 0;
	head->next = NULL;
	for (int i = 1; i < 20; ++i)
	{
		insertNode(&head,i*10);
	}
	print(head);
	//rprint(head);
	
	
}