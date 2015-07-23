/*Here is an inmplementation of the singly linked list. This Implementation is
non generic and supports Integers only. Feel free to use the container 
 in your projects modifying it to meet your needs
@file 	:list.h
@Author	:Delveri Munang
@Date 	:21/07/2015
@Project:Data structures and Algorithms in C++
		 University of Buea, Cameroon.

 */

struct node{
	int value;
	struct node* next;
};

class list{
private:
	node firstNode;
public:
	list();
	list(int data);
	void insert(int value);
	void delete();


};

list::list(){
	
}
list::list(int data){

}
void list::insert(int value){

}
void list::delete(){

}