#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prime(int n){
    int i;
    for(i=2; i<=n/2; ++i){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int x = -1;
    int arr[9];
    int count,i;
    while(x < 0) scanf("%d",&x);
    for(count = 0,i = 1;count<10;i+= 2){
        if(x % i == 0){
            arr[count] = i;
            count++;
        }
        if(i > x){
            printf("Not enough numbers can be found.\n");
            break;
        }
    }
    
    for(i = 0;i< count;i++) printf("%d\n",arr[i]);

    int primes_arr[count];
    int current = 0;
    for(i = 0;i< count;i++){
        if(prime(arr[i]) == 1) {
            primes_arr[current] = arr[i];
            current++;
        }
    }

    for(i = 0;i< current;i++) printf("%d\n",primes_arr[i]);

    return 0;
}
