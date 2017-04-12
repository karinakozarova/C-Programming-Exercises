#include <stdio.h> 

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int min = b;
    if (a < b) { min = a; }
    //else { min = b; }


    //for (int i = min; i > 0; i--) {
    //    if (a % i == 0 && b % i == 0) {
    //        printf("%d", i);
    //        break;
    //    }
    //}
    
    for (; a % min != 0 || b % min != 0; min--) {}
    
    printf("%d", min);
    return 0;
}
