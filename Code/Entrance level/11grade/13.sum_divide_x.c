#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x = -1;
    int arr[9];
    while(x < 0) scanf("%d",&x);
    int i,sum = 0,position = 0,count = 0;
    while(count < 10){
            sum = 0;
        for(i = 0; i< 1000;i++){
            if(i % x == 0){
                sum += i;
            }
        }
        arr[position] = sum;
        x += 1;
        count++;
        position++;
    }
    for(i = 0;i< 10; i++) printf("%d\n",arr[i]);
    return 0;
}
