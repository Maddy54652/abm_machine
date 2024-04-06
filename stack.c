#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

StackPtr initStack (void)
{
	StackPtr mainStack;
	mainStack = (StackPtr)malloc(sizeof(Stack));
	if(mainStack == NULL)
	{
		printf("An error has occured.\n");
		exit(1);
	}
	mainStack->Top = NULL;
	printf("The stack has been initialized.\n");
	return mainStack;
}
void push(StackPtr mainStack,char insert)
{
	NodePtr temp;
	temp = (NodePtr)malloc(sizeof(Node));

	if(temp == NULL)
	{
		printf("An error has occured.\n");
		exit(1);
	}

	temp->data = insert;
	temp->next = mainStack->Top;
	mainStack->Top = temp;
	return;
}
char pop(StackPtr mainStack)
{
	char GoodBye;
	NodePtr temp;
	if(mainStack == NULL)
	{
		printf("An error has occured.\n");
		exit(1);
	}
	GoodBye = mainStack->Top->data;
	temp = mainStack->Top;
	mainStack->Top = mainStack->Top->next;
	free(temp);
	return GoodBye;
}
char peek(StackPtr mainStack)
{
	char tData;
	tData = mainStack->Top->data;
	printf("%c\n",tData);
	return tData;
}
int isEmpty(StackPtr mainStack)
{
	if(mainStack->Top == NULL)
	{
		printf("List is empty.\n");
		return 1;
	}
	else
	{
		printf("List is not empty.\n");
		return 0;
	}
}
void empty(StackPtr mainStack)
{
	int i;
	for(i = 0;mainStack->Top != NULL;i++)
	{
		pop(mainStack);
	}
	return;
}
StackPtr destroyStack(StackPtr mainStack)
{
	if(isEmpty(mainStack) == 1)
	{
		free(mainStack);
		printf("destroy is succesful.\n");
	}
	return NULL;
}
