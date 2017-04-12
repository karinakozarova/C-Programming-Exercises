#include <stdio.h>

void get_min_max(int *arr, int *min, int *max, int size);

int main() {
	int arr[] = {1, 2, 3};

	int max;
	int min;
	
	get_min_max(arr, &min, &max, 3);

	printf("max val is %d, min val is %d\n", min, max);


	return 0;
}
