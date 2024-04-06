#ifndef STACK_H
#define STACK_H

typedef char Data;

typedef struct node{
	Data data;
	struct node *next;
}Node,*NodePtr;

typedef struct stack{
	NodePtr Top;
}Stack,*StackPtr;

StackPtr initStack (void);

void push(StackPtr mainStack,char insert); 

char pop(StackPtr mainStack); 

char peek(StackPtr mainStack);

int isEmpty(StackPtr mainStack);

void empty(StackPtr mainStack);

StackPtr destroyStack(StackPtr mainStack);
