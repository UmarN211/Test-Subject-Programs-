
#pragma once
#include <iostream>
using namespace std;
template <class T>
class Stack
{
private:
	T data[10];
	int top;
	const int MAX_SIZE = 10;
public:
	Stack();
	void push(T);
	T pop();
	bool isFull();
	bool isEmpty();
	T getTop();
};

template <class T>
Stack<T>::Stack()
{
	top = 0;
}

template <class T>
T Stack<T>::getTop()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	else
	{
		return data[top - 1];
	}
}

template <class T>
void Stack<T>::push(T n)
{
	if (isFull())
	{
		cout << "Error, stack full. " << endl;
	}
	else
	{
		data[top] = n;
		top++;
	}
}


template <class T>
T Stack<T>::pop()
{
	if (isEmpty())
	{
		cout << "Error: Stack is empty." << endl;
		return 0;
	}
	else
	{
		top--;
		return data[top];

	}
}

template <class T>
bool Stack<T>::isEmpty()
{
	if (top == 0)
	{
		return true;
	}
	return false;
}

template <class T>
bool Stack<T>::isFull()
{
	if (top == MAX_SIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}