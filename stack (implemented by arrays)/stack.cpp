/*
 * this code is written by ---> danial bidekani
 * in Sept 12 2016, and it implement a stack using
 * arrays.
 * be curious, think recursive :)
 * ======================================
 * reviewed and modified in Sept 18 2016
 * ======================================
 */

#include <iostream>
#include "stack.h"
//-------------------------------------------->>>stack()
/* constructor function without parameter (default)
*  the default stack size is 100 */
stack::stack()
{
	this->capacity = 100;
	storage = new int[capacity];
	head = -1;
}
//-------------------------------------------->>>stack(int )
// constructor with an integer parameter as stack capacity
stack::stack(int capacity)
{

	if(capacity <= 0)
		std::cerr<<"Wrong Input\n";
	else
	{
		this->capacity = capacity;
		storage = new int[capacity];
		head = -1;
	}
}
//-------------------------------------------->>>push()
void stack::push(int element)
{
	if(head == capacity)
		throw "Overflow\n";
	else
	{
		head++;
		storage[head] = element;
	}
}
//-------------------------------------------->>>pop()
void stack::pop()
{
	if(head == -1)
		throw "Underflow\n";
	else
	{
		storage[head] = int();
		head--;
	}
}
//-------------------------------------------->>>getSize()
int stack::size()
{
	return (head+1);
}
//-------------------------------------------->>>isEmpty()
bool stack::isEmpty()
{
	if(head == -1)
		return true;
	else
		return false;
}
//-------------------------------------------->>>peek()
int stack::top()
{
	return storage[head];
}
