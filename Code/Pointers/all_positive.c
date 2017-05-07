#include <stdio.h>
#include <stdlib.h>

void main(){
    int array[11] = {2,-1}; //add some nums for testing
    all_positive(&array,11);
}

int all_positive(int *arr, int size){
    int i;
    for(i = 0;i<size;i++){
        if(arr[i] < 0)  return 0;
    }
    return 1;
}
