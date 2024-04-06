#include<stdio.h>
#include"stack.h"


int main(int argc,char* argv[]){

	//testing the stack functions
	
	StackPtr Test_Stack;
	int i;
	Test_Stack = initStack();
	isEmpty(Test_Stack);
	push(Test_Stack,'a');
	push(Test_Stack,'#');
	push(Test_Stack,'|');
	push(Test_Stack,'R');
	isEmpty(Test_Stack);
	peek(Test_Stack);
	for(i = 0;i<4;i++)
	{
		peek(Test_Stack);
		pop(Test_Stack);
	}
	isEmpty(Test_Stack);
	push(Test_Stack,'$');
	push(Test_Stack,67);
	empty(Test_Stack);
	isEmpty(Test_Stack);
	destroyStack(Test_Stack);

	printf("It work.\n");
	return 0;
}
