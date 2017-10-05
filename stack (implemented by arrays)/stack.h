/*
 * this code is written by ---> danial bidekani
 * in Sept 12 2016, and it implement a stack using
 * arrays.
 * be curious, think recursive :)
 * ======================================
 * reviewed and modified in Sept 18 2016
 * ======================================
 */

class stack{

private:
	int *storage; // stack dynamic array
	int head; // head refers to the latest full field in stack
	int capacity; // capacity of the whole stack

// functions declaration area

public:
	stack();
	stack(int );
	void push(int );
	void pop();
	int top();
	int size();
	bool isEmpty();
};
