/*
 * this code is written by ---> danial bidekani
 * in Sept 9th 2016, and implement a dynamic stack
 * be curious, think recursive :)
 */

#include <iostream>
#include "stack.h"

//-------------------------------------------->>>node(int )
node::node(int data)
{
	this->data = data;
	this->next = NULL;
}
//-------------------------------------------->>>stack(void )
stack::stack(void )
{
	top = NULL;
	size = 0;
}
//-------------------------------------------->>>stack(int )
stack::stack(int element)
{
	top = new node(element);
	size = 1;
}
//-------------------------------------------->>>~stack()
stack::~stack(void)
{
	while(top != NULL)
	{
		node *temp = top;
		top = top->next;
		delete temp;
	}
}
//-------------------------------------------->>>pop(void )
int stack::pop(void)
{
	if(top == NULL)
		throw "Stack Underflow\n";
	else
	{
		int element;
		this->size--;
		node *temp = top;
		element = top->data;
		top = top->next;
		delete temp;
		return element;
	}
}
//-------------------------------------------->>>peek(void )
int stack::peek(void )
{
	if(size == 0)
		throw "Stack Underflow\n";
	else
		return top->data;
}
//-------------------------------------------->>>push(void )
void stack::push(int element)
{
	node *temp = new node(element);
	if(!temp)
		throw "Stack Overflow\n";

	temp->next = top;
	top = temp;
	this->size++;
}
//-------------------------------------------->>>isEmpty(void )
bool stack::isEmpty(void )
{
	return top == NULL;
}
//-------------------------------------------->>>getSize(void )
int stack::getSize(void )
{
	return this->size;
}

//-------------------------------------------->>>clear(void )
void stack::clear(void )
{
	while(top != NULL)
	{
		node *temp = top;
		top = top->next;
		delete temp;
	}
	this->size = 0;
}

