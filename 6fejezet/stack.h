#ifndef _STACK_H
#define _STACK_H

//template<class T>
class Stack {
public:
	int *A;
	int n = 0;
	Stack(int m);
	~Stack();
	void push(int x);
	void pop();
	void top();
	bool isFull();
	bool isEmpty();
	void setEmpty();
};

#endif 
