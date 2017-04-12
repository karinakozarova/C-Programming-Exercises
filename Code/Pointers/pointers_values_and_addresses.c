#include <stdio.h>

int main() {
	int p = 5;
	int *ptr1 = &p;

	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;

	printf("value of *ptr1 %d\n", *ptr1);
	printf("value of **ptr2 %d\n", **ptr2);
	printf("value of ***ptr3 %d\n", ***ptr3);
	
	printf("address of ptr1 %p\n", (void*) &ptr1);
	printf("address of ptr2 %p\n", (void*) &ptr2);
	printf("address of ptr3 %p\n", (void*) &ptr3);
	printf("address of *ptr2 %p\n", (void*) ptr2);
	printf("address of *ptr3 %p\n", (void*) ptr3);

	return 0;
}
