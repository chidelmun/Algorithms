/*Test Program for our array Implementation of the Stack
The program creates a stack of integers, pushes values 
into it and then empties the stack by an iterative popping call.

@File 	: main.cc
@Author : Delveri Munang
@Date   : 21/07/2015
@Project: Data Structures and Algorithms
		  University of Buea, Cameroon.
*/


#include <iostream>
#include "include/api.h"
#include "stack.h"

int main(void){

	cout << "Stack Testing\n";
	int array[STACK_SIZE];
	

	for(int i=top;i<STACK_SIZE;i++){
		push(array,i*10);
	}

	print(array);

	for(int i=0;i<STACK_SIZE;i++){
		pop(array);
	}

	print(array);


}