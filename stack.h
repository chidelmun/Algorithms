/*
Here is an Implementation of the Stack Data structure
Feel free to use this code and modify it to meet your needs
@Author: Delveri Munang
@Date  : 19/07/2015
*/


class stack{
	private:
		int size;
		int top;
		int *elements;


	public:
		stack(int x){
			size = x;
			top = 0;
			for (int i = 0; i < size; ++i)
			{
				elements[i] = 0;
			}
		}
		stack(int size, int elmt);
		void pop();
		int push(int item);
		int peek();
		bool isEmpty();
		void print();
		int getSize();

};

int stack::getSize(){
	return size;
}

int stack::push(int item){
	if (top==size)
	{
		cout << "Stack is Full" << endl;
		return 0;
	}
	elements[top] = item;
	top++;
	return top;
}

void stack::pop(){
	if (top==0)
	{
		cout << "Stack is Empty" << endl;
	}

	elements[top] = 0;
	top--;

}
// Still to be worked on. if top is zero does not mean empty stack.
int stack::peek(){
	if(top==0)
		cout << "Stack is Empty" << endl;
	return elements[top];
}

void stack::print(){
	if (top==0)
	{
		cout << elements[top] << endl;
	}
	for (int i = 0; i < top; ++i)
	{
		cout << elements[i] << endl;
	}
}