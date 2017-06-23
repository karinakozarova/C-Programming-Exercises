#include <stdio.h>
const int SEG_FAULT = 1000000000;

struct Fibo
{
	int firstNum;
	int secondNum;
};

void Fibonacci_reccursive(struct Fibo fibo);
int Fibonacci(struct Fibo fibo);

int main()
{
	struct Fibo fibo;
	fibo.firstNum = 0;
	fibo.secondNum = 1;
	Fibonacci(fibo); //starting values
}

void Fibonacci_reccursive(struct Fibo fibo){
	int num;
	num = fibo.firstNum + fibo.secondNum;
	printf("%d\n",num );
	if(num<SEG_FAULT){
		fibo.firstNum = fibo.secondNum;
		fibo.secondNum = num;
		Fibonacci(fibo);
	}

}

int Fibonacci(struct Fibo fibo){
	int num;
	while(1){
		num = fibo.firstNum + fibo.secondNum;
		printf("%d\n",num );
		if(num<SEG_FAULT){
			fibo.firstNum = fibo.secondNum;
			fibo.secondNum = num;
		}else return 0;
	}

}