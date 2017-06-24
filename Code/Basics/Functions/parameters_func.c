#include <stdio.h>

int sum(int num1,int num2){
	int sum = num1 + num2;
	printf("Sum: %d\n",sum);
	return sum;
}

int main(int argc, char const *argv[])
{
	sum(5,6);
	return 0;
}
