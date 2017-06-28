#include <stdlib.h>
#include <stdio.h>

int reccursive_natural_till_0(int num){
    if(num>= 0)printf("%d\n",num);
    else return 0;
    reccursive_natural_till_0(num-1);

}

int main(){
        int num;
        scanf("%d",&num);
        printf("\n");
        reccursive_natural_till_0(num);
        return 0;
}
