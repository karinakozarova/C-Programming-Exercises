#include <stdio.h>
#include <stdlib.h>

int main() {
	int *variable;  //declare a pointer
	variable = malloc(sizeof(variable));   // malloc needed space
	printf("Variable: %d \nAdress: %d\n",variable,&variable);
	free(variable);     //free space
	return 0;
}
