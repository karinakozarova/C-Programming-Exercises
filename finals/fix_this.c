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
		sum += *(array+i);

		//realloc memory
		if(i == size-1){
			size *= 2;			
			array = realloc(array, size);	
			
		}
		i++;
	}
	free(array);		//free the memory
	printf("%d\n\n",sum);	//print sum

	return 0;
}
