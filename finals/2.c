#include <stdio.h>
#include <stdlib.h> 

int main(){	
	int* array;
	array = malloc(sizeof(int)*10);
	for(int i = 0; i<10;i++){
			*(array + i) = i+1;
	}
	for(int i = 0; i<10;i++){
			printf("%d",*(array + i));
	}
	free(array);
	
}
