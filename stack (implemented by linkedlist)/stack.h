/*
 * this code is written by ---> danial bidekani
 * in Sept 9th 2016, and implement a dynamic stack
 * be curious, think recursive :)
 */

struct node {
	node *next;
	int data;

	node(int );
};

class stack{
private:
	node *top;
	unsigned int size;

public:
	stack(void );
	stack(int );
	~stack();
	int pop(void );
	int peek(void );
	int getSize(void );
	void push(int );
	void clear(void );
	bool isEmpty(void );
};
