#include <stdio.h>

int main() {
	float pi = 3.14;
	float nope = 9.99;

	printf("%f %f %f\n", pi + nope, pi * nope, pi > nope ? nope : pi);

	return 0;
}
