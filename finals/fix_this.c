#include <stdio.h>
#include <stdlib.h>

int main(){
	// sum nums until EOF
	int* array;	// pointer to the first element
	int size = 10; // memory for 10 elements
	int i = 0, sum = 0;
	int* memory = malloc(sizeof(int)*10);	//get memory
	while(scanf("%d",(array + i))!= EOF){	//read until EOF
		i++;
		//add element to the sum
		int element = *(array+i);
		sum += element;

		//realloc memory
		if(i == size-1){
			size *= 2;			
			memory = realloc(memory, size);	
					
		}
	}
	
	printf("%d",sum);	//print sum
	free(memory);		//free the memory
	return 0;
}
