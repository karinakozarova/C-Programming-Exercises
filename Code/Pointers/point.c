#include <stdio.h>

struct time{
    int h;
    int m;
};

void  main(){
//Дефинирайте структура за точка, пазеща информацията за X и Y
 struct time one;
 struct time two;  
 struct time difference_type;
 
    one.h = 12;
    one.m = 40;
    two.h = 8;
    two.m = 30;

    difference_type.h = one.h-two.h;
    difference_type.m = one.m - two.m;

printf("%d",difference_type.h);
printf("%d",difference_type.m);

}
