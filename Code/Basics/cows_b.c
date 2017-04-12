#include <stdio.h>

int main() {
    int target[] = {1,2,3,4};
    int cows, bulls;

    while (bulls != 4) {
        int n;
        scanf("%d", &n);
        
        while(n) {
            int d = n %10;
            
            for(int i = 0; i < 4; i++) {
                if (d == target[i]) {
                // bull or cow
                
            }


            n /= 10;
        }

    }

    return 0;
}
