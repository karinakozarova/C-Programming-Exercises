#include <stdlib.h>
#include <stdio.h>
int nbYear(int p0, double percent, int aug, int p) {
    percent /= 100;
    int count = 0;

    for(;;){
      int current = p0+p0*percent + aug;
      p0 = current;
      count++;
      if(current>=p){
      return count;
      }
    }
}                                               

int main(){
    nbYear(1000,2,50,1200);
}
