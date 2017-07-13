#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int third_digit(float input){
  // returns 1 if 3rd digit is 3, 0 if not
  int digit,num = trunc(input*1000.0);
  digit = abs((int)fmod(num,10));
  if(digit == 3) return 1;
  return 0;
}

int main(){
  int x = -1;
  float result;
  while(x<= 0 || x>= 10) scanf("%d",&x); //waits for correct input
  float arr[9];
  for(int i = 0;i<= 10;i++){ // for in array
    for(int count = 0;;count++){ //count - number cos to be find out of
      result = cos(count);
      if(third_digit(result) == 1){
         arr[i] = result;
         i++;
      }
      if (i == 10) break;
    }
  }

  for(int i = 0;i<10;i++) printf("%f\n",arr[i]); //array output
  return 0;
}
