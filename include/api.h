#include <iostream>

#define STACK_SIZE 10
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
	top--;
	stack[top] = 0;
	
}

int print(int *stack){
	if (top==0){
		cout << "Stack is Empty: Nothing to Print." << endl;
		return 0;
	}
	cout <<"Printing stack......\n";
	for(int i=0;i<top;i++){
		cout << stack[i] << endl; 
	}
	return 1;
}

bool isEmpty(int *stack){
	return top==0;
}

