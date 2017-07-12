#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int third_digit(float input){
  int digit;
  int num = trunc(input*1000.0);
  digit = (int)fmod(num,10);
  digit = abs(digit);
  if(digit == 3) return 1;
  return 0;
}
int main(){
  int x = -1;
  float result;
  while(x<= 0 || x>= 10) scanf("%d",&x);
  float arr[9];
  for(int i = 0;i<= 10;i++){ // for in array
    for(int count = 0;;count++){
      result = cos(count);
      if(third_digit(result) == 1){
         arr[i] = result;
         i++;
      }
      if (i == 10) break;
    }
  }

  for(int i = 0;i<10;i++) printf("%f\n",arr[i]);
  return 0;
}
