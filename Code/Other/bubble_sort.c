#include <stdio.h>

#define DIM 5

int main() {
    
    int arr[DIM];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    for(int i = 0; i < DIM - 1; i++) {
        for(int g = i + 1; g < DIM; g++) {
            int temp = arr[i];
            arr[i] = arr[g];
            arr[g] = temp;
        }
    }

    for (int i = 0; i < DIM; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
