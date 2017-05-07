#include <stdio.h>
#include <stdlib.h>

//10 int-а, записва числата от 1 до 10 в нея, принтира ги и освобождава паметта
void main(){
    int array[10]; //add some nums for testing
    int i =0;
    int *size = malloc(sizeof(array[10]));
    for(;i<10;i++){
        array[i] = i;
    }
     for(i=0;i<10;i++){
        printf("%d",array[i]);
    }
    free(size);
}


