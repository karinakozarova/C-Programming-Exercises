#include <stdio.h>


int* find(int *haystack, int size, int needle) {
	return NULL;
}

int main() {
	
	int arr[3] = {5, 4, 2};

	int *find_result = find(arr, 3, 3);
	
	printf("is find_result null? %d\n", find_result == NULL);

	

	return 0;
}
