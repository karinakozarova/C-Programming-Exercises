#include <stdio.h>
#include <math.h>

float cos_sum_range(int start,int finish){
  float sum = 0;
  for(int i = start; i< finish;i++){
      float result = cos(i);
      sum += result;
  }
  return sum;
}
int main(){
  int x = -1;
  while(x<=0 || x>= 10) scanf("%d",&x);
  float arr[9],start = 0;
  for(int i = 0; i<10;i++){
    arr[i] = cos_sum_range(start,x);
    start = x;
    x *= 2;
  }
  for (int i = 0; i < 10; ++i) printf("%f\n",arr[i] );

  return 0;
}
