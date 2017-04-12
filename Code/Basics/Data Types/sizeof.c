#include <stdio.h>

int main() {
	int sample;
	
	printf("int %lu\n", sizeof(sample));
	printf("float %lu\n", sizeof(float));
	printf("char %lu\n", sizeof(char));
	printf("double %lu\n", sizeof(double));
	printf("long long %lu\n", sizeof(long long));
	printf("int[10] %lu\n", sizeof(int[10]));
		
	return 0;
}
