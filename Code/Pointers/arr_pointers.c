#include <stdio.h>

int main() {
	int arr[5] = {5, 4, 3, 2, 1};
	int *ptr;
	
	ptr = arr;

	printf("%d\n", *arr);
	printf("%d\n", *(arr + 5));

	// arr = arr + 1; - not permitted, since arr is a const pointer

	for(; ptr != arr + 5; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");

	return 0;
}
