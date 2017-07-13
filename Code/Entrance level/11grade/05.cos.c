#include <stdio.h>
#include <math.h>


int main(){
    int x = -1;
    while(x > 10 || x < 0) scanf("%d",&x);
    float arr[10];
    int i = 0;
    for(;i<=10;i++){
        arr[i] = cos(x);
        printf("%f\n",arr[i]);
        x++;
    }
    return 0;
}
