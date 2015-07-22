#include "queue.h"
#include <iostream>
using namespace std;

int main(void){
	queue *lst = new queue(10,10);
	for (int i = 0; i < lst->getSize(); ++i)
	{
		lst->enqueue(i*10);
	}
	lst->print();

	lst->dequeue();
	lst->dequeue();
	cout << "\nPrinting New Queue" << endl;
	lst->print();
	return 0;
}