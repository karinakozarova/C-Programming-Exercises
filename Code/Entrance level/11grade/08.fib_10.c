#include <stdio.h>

void fib_division(int x){
  int arr[9];
  int i  = 0, first = 0,second = 1,new_second;
  //find fib nums
  while(i<10){
    new_second = first + second;
    first = second;
    second = new_second;
    if (new_second % x == 0){ //fib num is divided by x
      arr[i] = new_second;
      i++;
    }
  }
  for (int i = 0; i < 10; ++i) printf("%d\n",arr[i] );
}

int main()
{
  int x = -1;
  while(x<0 || x>=10) scanf("%d",&x);
  fib_division(x);
  return 0;
}
