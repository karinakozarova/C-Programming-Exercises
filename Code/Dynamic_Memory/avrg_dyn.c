#include <stdio.h>
#include <stdlib.h>
float avrg(int nums,float sum);

int main(){
	// sum nums until EOF
	float* array;	// pointer to the first element
	int size = 10; // memory for 10 elements
	int i = 0;
	float sum = 0;
	float count = 0;

	array = malloc(sizeof(float)*10);	//get memory
	while(scanf("%f",(array + i))!= EOF){	//read until EOF
		
		//add element to the sum
		sum += *(array+i);
		count++;
		
		//realloc memory
		if(i == size-1){
			size *= 2;			
			array = realloc(array, size);	
		}
		i++;
	}
	free(array);		//free the memory
	printf("%f\n\n",sum);	//print sum
	printf("%f\n\n",avrg(count,sum));	//print sum

	return 0;
}

float avrg(int nums,float sum){
	return sum/nums;
}