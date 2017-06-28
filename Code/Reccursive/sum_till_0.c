#include <stdlib.h>
#include <stdio.h>

int reccursive_sum_till_0(int num,int sum){
    if(num>= 0){
            sum += num;
            reccursive_sum_till_0(num-1,sum);
    } else printf("Sum: %d",sum);
}

int main(){
        int num,sum = 0;
        scanf("%d",&num);
        printf("\n");
        reccursive_sum_till_0(num,sum);
        return 0;
}
