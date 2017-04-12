#include <stdio.h>

int main() {
    int i = 0;
    while(1) {
        //printf("%d: Hello while!\n", i);
        while (1) {
            //printf("Inner while %d", i);    
            if (i == 1000) {
                break;
            }
            i++;
        }
        i++;
        if (i == 1001) { break; }
    }

    for (int j = 0 ; j < 10 ; j++) {
        printf("\nStarti%d", j);
        if (j == 3) continue; 
        printf("\nEnd");
    }   

    return 0;
}
