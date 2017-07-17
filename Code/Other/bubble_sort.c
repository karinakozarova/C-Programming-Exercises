#include <stdio.h>

int main() {
    int count = 0;
    int arr[5];
    arr[0] = 3;
    arr[1] = 2;
    arr[2] = 1;
    arr[3] = 4;
    arr[4] = 5;

    // descending order
    do{
        count = 0;
        for (int i = 0; i < 5 ; i++) {
            if(arr[i+1] > arr[i]){
                int c = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = c;
                count++;
            }
        }
    } while(count != 0);

    for (int i = 0; i < 5; ++i) {
     printf("%d\n",arr[i]);
    }

    return 0;

}
