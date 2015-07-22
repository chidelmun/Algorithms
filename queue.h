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
	int head,tail,size;
	int *elements;
public:
	queue(int size, int value);
	int enqueue(int x);
	void dequeue();
	int peek();
	void print();
	int getSize();

};

int queue::getSize(){
	return size;
}

queue::queue(int y,int value){
	size = y;
	elements = new int[size];
	head = 0;
	tail =0;
	elements[head] = value;
	head++;
}

int queue::enqueue(int x){
	/*if (top==size)
	{
		cout << "Queue is Full..." << endl;
		return 0;
	}*/
	elements[head] = x;
	head++;
	return head;
}

int queue::peek(){
	return elements[tail];
}

void queue::dequeue(){
	elements[tail] = 0;
	++tail;
}

void queue::print(){
	cout << "Printing Queue" << endl;
	for (int i = 1; i < size; ++i)
	{
		cout << "Element :" << elements[i] << endl;
	}
}
