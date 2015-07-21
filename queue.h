/*Here is an array inplementation of the queue. This Implementation is
non generic and supports Integers only. Feel free to use the container 
 in your projects modifying it to meet your needs
@file 	:queue.h
@Author	:Delveri Munang
@Date 	:21/07/2015
@Project:Data structures and Algorithms in C++
		 University of Buea, Cameroon.

 */
#include <iostream>
using namespace std;

class queue{
private:
	int top,tail,size;
	int *elements;
public:
	queue(int size, int value);
	int enqueue(int x);
	void dequeue();
	int peek();
	void print();

};

queue::queue(int size,int value){
	size = size;
	elements = new int[size];
	top = 0;
	tail =0;
	elements[top] = value;
}

int queue::enqueue(int x){
	/*if (top==size)
	{
		cout << "Queue is Full..." << endl;
		return 0;
	}*/
	elements[++top] = x;
	return top;
}

int queue::peek(){
	return elements[top];
}

void queue::dequeue(){
	elements[tail] = 0;
	++tail;
}

void queue::print(){
	for (int i = 0; i < size; ++i)
	{
		cout << elements[i];
	}
}
