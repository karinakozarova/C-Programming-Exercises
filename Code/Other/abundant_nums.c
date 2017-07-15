#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    
    printf("Enter num: ");
    scanf("%d",&num);

    //find divisors
    for (int i = 1; i < num; ++i) {
        if(num % i == 0) sum += i;
    }

    if(sum > num) printf("The number you entered is abundant");
    else printf("%d is not abundant",num);

    return 0;

}
