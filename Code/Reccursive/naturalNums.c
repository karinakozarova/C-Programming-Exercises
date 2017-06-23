#include <stdio.h>
void naturalNums_reccursive(int num,int max);
void naturalNums(int num,int max);

int main(){
	printf("Enter the interval in whic to print the natural nums\n");
	printf("Enter it like: a:b, where a and b are natural nums\n");
	int num,max;
	scanf("%d:%d",&num,&max);
	naturalNums(num,max);
}

void naturalNums(int num,int max){
	for(;num<=max;num++){
		printf("%d\n",num );
	}
}

void naturalNums_reccursive(int num,int max){
	//reccursive function to print the 50 natural numbers
	if(num<=max){
		printf("%d\n",num);
		num++;
		naturalNums(num,max);
	}
}
