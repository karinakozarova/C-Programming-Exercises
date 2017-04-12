#include <stdio.h>


int main() {

    short num = 0;

    while(num >= 0)
        num++;


    printf("%hd ", num);

    num--;

    printf("%hd\n", num);
    return 0;
}
