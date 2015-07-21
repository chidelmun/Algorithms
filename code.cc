#include "queue.h"
#include <iostream>
using namespace std;

int main(void){
	queue *lst = new queue(10,10);
	cout << lst->peek() << endl;
	for (int i = 0; i < 15; ++i)
	{
		lst->enqueue(i*10);
	}

	lst->print();
	return 0;
}