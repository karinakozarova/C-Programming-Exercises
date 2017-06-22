#include <stdio.h>
#include <stdlib.h>


void main(){
	int *arr;
	arr = malloc(sizeof(int)*10);
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	free(arr);


}
