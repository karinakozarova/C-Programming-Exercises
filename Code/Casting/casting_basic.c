#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integer = 5;
	float floating_more = 5.55;	
	float floating_less = 5.05;

	printf("Before cast: \n%d\n%f\n%f\n",integer,floating_less,floating_more);
	
	printf("\nAfter cast: \n%d\n%d\n%d\n",integer,(int)floating_less,(int)floating_more);

	return 0;
}