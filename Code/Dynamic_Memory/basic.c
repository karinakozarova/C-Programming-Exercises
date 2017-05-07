#include <stdio.h>
#include <stdlib.h>

int main() {
	int *arr = malloc(10 * sizeof(int));
	arr[1] = 1;
	free(arr);
	return 0;
}
