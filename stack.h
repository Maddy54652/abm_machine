#ifndef STACK_H
#define STACK_H
#include<stdbool.h>

typedef struct node{
	struct node *next;
	int temp;
}NODE;

typedef struct stack{
	struct Node *top;
	int size;
}STACK;




void push(void);
//insert stack element

void pop(void);
//remove element

void top(void);
//returns top of stack

bool isEmpty(void);
//returns true if stack is empty

void size(void);
//returns stack size

#endif
