#include <stdio.h>

int main() {
	int sample = 42;
	int *ptr;
	
	ptr = sample;

	printf("variable value %d\n", sample);
	printf("variable value %d\n", *ptr);

	printf("variable address %p\n", (void*) &sample);
	printf("pointer points to %p\n", (void*) ptr);
	printf("pointer address %p\n", (void*) &ptr);
		
	return 0;
}
