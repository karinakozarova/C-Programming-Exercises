#include <stdlib.h>
#include <stdio.h>

int nbYear(int p0,float percent,int income,int result){
    percent /= 100;
    int count = 0;
    for(;;){
        int current_result = p0 + p0 * percent + income;
        p0 = current_result;
        count++;
        if(current_result == result){
                printf("It will need %d years",count);
                return count;
        }
    }
}

int main(){
    nbYear(1000,2,50,1200);
}
