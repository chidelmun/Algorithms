#include "llist.h"
#include <iostream>
using namespace std;

int main(void){

	NODE head = create(10);

	for (int i = 2; i < 5; ++i)
	{
		insert(&head,i*10);
	}

	print(&head);

	cout << head.data << endl;

	NODE nxt = *head.next;
	cout << nxt.data << endl;

	return 0;
	
}