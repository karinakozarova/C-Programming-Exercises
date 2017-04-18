#include <stdio.h>

int  main(){
    int *sum =645;
    suma(&sum);
    printf("Main: %d",(int)sum);
}

void suma(int *sum){
    *sum += *sum;
    printf("Func: %d\n",*sum);
}
