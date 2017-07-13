#include <stdio.h>

int isPrime(num){
    int i = 2;
    for (;i< num;i++) {
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
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    while(x<=y){
            if(isPrime(x)+ends_in_3(x)== 2) printf("%d\n",x);
            x++;
    }
    return 0;
}
