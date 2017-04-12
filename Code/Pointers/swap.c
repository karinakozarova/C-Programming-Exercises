#include <stdio.h>

void swap(int *a, int *b) {
	printf("a = %d, b = %d\n", *a, *b);
	int c = *a;
	*a = *b;
	*b = c;
	printf("a = %d, b = %d\n", *a, *b);
}

int main() {
	int num1 = 4, num2 = 6;

	printf("num1 = %d, num2 = %d\n", num1, num2);
	
	swap(&num1, &num2);

	printf("num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
