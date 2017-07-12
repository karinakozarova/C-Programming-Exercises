#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For random(), RAND_MAX

unsigned int randr(unsigned int min, unsigned int max)
{
       double scaled = (double)rand()/RAND_MAX;

       return (max - min +1)*scaled + min;
}


int main(){
    int x = -1;
    while(x > 10 || x < 0) scanf("%d",&x);
    int arr[101];
    int i = 0;
    for(;i <= 100;i++){
        arr[i] = randr(0,100);
        printf("%d\n",arr[i]);
    }
    return 0;
}

/* sorting
	for(int x=0; x<n; x++)

	{

		for(int y=0; y<n-1; y++)

		{

			if(array[y]>array[y+1])

			{

				int temp = array[y+1];

				array[y+1] = array[y];

				array[y] = temp;

			}

		}

	}
	*/
