#include<stdio.h>
#include"stack.h"


int main(int argc,char* argv[]){

	StackPtr core_1;
	StackPtr core_2;
	core_1 = initStack();
	core_2 = initStack();
	empty(core_1);
	empty(core_2);
	
	isEmpty(core_1);
	isEmpty(core_2);
	destroyStack(core_1);
	destroyStack(core_2);

	printf("It work.\n");
	return 0;
}
