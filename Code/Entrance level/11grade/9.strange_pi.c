#include <stdio.h>
int arr_size = 2;

/*
 * Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери числото пи чрез следното развитие в ред:
4/1-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 4/N<x. Получената стойност за пи да се изведе на екрана.
 */

int main() {
    float x;
    double pi = 4.0000;
    printf("Num?");
     scanf("%f",&x);
     int sign = 0; // 0 - -, 1 - +
    for(int i = 3;i >= 0;i += 2){
        double result = 4.000/ i;
        // printf("%d : %f\n",i,result ); //use for debugging purposes only
        if(result < x) break;
        if(sign){
         pi += result;
         sign = 0;
        } else {
          pi -= result;
          sign = 1;
        }

    }
    printf("%f",pi);
    return 0;
}
