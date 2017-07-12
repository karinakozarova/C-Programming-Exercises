#include <stdio.h>

void fib(int x,int y){
    int first = 0, second = 1;
    int new_second = first + second;

    while (new_second <= y){
    new_second = first + second;
    first = second;
    second = new_second;
    if(new_second >= x)
        printf("%d\n",new_second);
    }
}


int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    fib(x,y);
    return 0;
}
