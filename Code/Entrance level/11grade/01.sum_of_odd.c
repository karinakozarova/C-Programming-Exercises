#include <stdio.h>

int main(){
        int x,y,sum = 0;
        scanf("%d",&x);
        scanf("%d",&y);

        while(x <= y){
            if(x%2 == 1) sum += x;
            x++;
        }
        printf("Sum: %d",sum);
       return 0;
}
