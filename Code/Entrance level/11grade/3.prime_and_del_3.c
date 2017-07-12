#include <stdio.h>

int isPrime(num){
    for (int i = 2;i< num;i++) {
        if(num % i == 0) return 0;

    }
    return 1;
}

int ends_in_3(num){
    int digit = num % 10;
    if (digit == 3)
        return 1;
    else return 0;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n",ends_in_3(x));
    printf("%d",isPrime(x));
    return 0;
}
