#include <stdio.h>

void sum_n_reccursive(int num,int sum,int n){
	if(num<=n){
			sum += num;
			num++;
			sum_n_reccursive(num,sum,n);
	}else{
		printf("Sum: %d\n",sum );
	}
}
int main()
{
	sum_n_reccursive(0,0,60000);	//sum 1-60000

	return 0;
}

