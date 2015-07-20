#include <iostream>
#include "stack.h"

#define STACK_SIZE 4
using namespace std;

int top = 0;
int push(int *stack, int value){
	if(top == STACK_SIZE){
		cout << "Stack is Full\n";
		return -1;
	}
	stack[top] = value;
	top++;
	return top;
}
void pop(int *stack){
	cout << "Stack top is :" << top << endl;
	stack[top] = 0;
	top--;
}

void print(int *stack){
	cout <<"Printing stack......\n";
	for(int i=0;i<STACK_SIZE;i++){
		cout << stack[i] << endl; 
	}
}

bool isEmpty(int *stack){
	return top==0;
}

int main(void){

	cout << "Stack Testing\n";
	int array[STACK_SIZE];
	push(array,10);
	push(array,20);
	push(array,30);
	push(array,40);
	push(array,50);
	print(array);
	pop(array);
	print(array);




}