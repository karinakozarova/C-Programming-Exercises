#include <stdio.h>
void by_two(int *arr, int size);

void main () {
	  //void by_two(int *arr, int size), която удвоява стойността на всеки елемент от масива arr.
    int arr[11] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
    by_two(arr,11);
    printf("%d",arr[5]);
}


void by_two(int *arr, int size){
    int i;
    for(i = 0;i<11;i++){
        arr[i] *= 2;
    }
}
