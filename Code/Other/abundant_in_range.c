#include <stdio.h>
int is_abundant(int num);

int main() {
    for (int i = 0; i < 1000 ; ++i) {
        if(is_abundant(i) == 1) printf("%d\n",i);
    }

    return 0;

}

int is_abundant(int num){

    int sum = 0;

    //find divisors
    for (int i = 1; i < num; ++i) {
        if(num % i == 0) sum += i;
    }

    if(sum > num) return 1;
    return 0;
}
