/*
Here is an Implementation of the Stack Data structure
Feel free to use this code and modify it to meet your needs
@Author: Delveri Munang
@Date  : 19/07/2015
*/

template <typename T>
class stack{
	private:
		int size;
		int top;
		T *elements;


	public:
		stack();
		stack(int size);
		stack(int size, T elmt);
		void pop();
		void puch(T item);
		int peek();
		bool isEmpty();

};