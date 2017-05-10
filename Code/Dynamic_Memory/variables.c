#include <stdio.h>
#include <stdlib.h>

int main() {
	int *variable;  //declare a pointer
	malloc(sizeof(variable));   // malloc needed space
	variable = 35;  //use variable
	printf("Variable: %d \nAdress: %d\n",variable,&variable);
	free(variable);     //free space
	return 0;
}
