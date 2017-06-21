#include <stdio.h>
#include <stdlib.h>

int main(){
	// sum nums until EOF
	int* array;	// pointer to the first element
	int size = 10; // memory for 10 elements
	int i = 0, sum = 0;
	array = malloc(sizeof(int)*10);	//get memory
	while(scanf("%d",(array + i))!= EOF){	//read until EOF
		
		//add element to the sum
		int element = *(array+i);
		sum += element;

		//realloc memory
		if(i == size-1){
			size *= 2;			
			array = realloc(array, size);	
					
		}
i++;
	}
	
	printf("%d",sum);	//print sum
	free(array);		//free the memory
	return 0;
}
