#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For random(), RAND_MAX

unsigned int randr(unsigned int min, unsigned int max)
{
   return min + rand() % (max+1 - min);

}


int main(){
    int x = -1;
    while(x > 10 || x < 0) scanf("%d",&x);
    int arr[99];
    int i = 0;
    for(;i <= 100;i++){
        arr[i] = randr(0,100);
    }
    //sorting
    int start_index = 0,finish_index = 100;
    int sorted_arr[100];
    for (int i = 0; i <= 100; ++i)
    {
      if(arr[i] % 10 == x){
             sorted_arr[start_index] = arr[i];
             start_index++;
       } else if(arr[i] % 10 != x) {
             sorted_arr[finish_index] = arr[i];
             finish_index--;
       }
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d\n",sorted_arr[i]);
    }
    return 0;
}


