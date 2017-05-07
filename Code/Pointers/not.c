#include <stdio.h>
#include <stdlib.h>

void main(){
    int array[11] = {0,1,1}; //add some nums for testing
    not(&array,11);
}

void not(int *arr, int size){
    int i=0;
    for(;i<size;i++){
        if(arr[i] == 0) arr[i] = 1;
        else aarr[i] = 0;
    }
}
