/*Да се намери сумата на всички числа в интервала [0; N] и да се запише като първи елемент в масива. Да се намери второто число N' в интервала [0; +∞) делящо се на x. Да се намери сумата на всички числа в интервала [0, N'] и да се запише като втори елемент в масива.
*/

#include <stdio.h>

int main(){
  int x = -1,arr[9],n,sum = 0;
  arr[9]  = -1;
  int count = 0;
  while(x <= 0 || x >= 10) scanf("%d",&x);

  for(int i = 1; ; ++i){
    if(i % x == 0){  // finds n
        n = i;
        for(int i =0;i < n; i++) sum += i; // finds sum
        arr[count] = sum;
        count++;
    }
    if(arr[9] != -1) break;
  }

  for (int i = 0; i < 10; ++i) printf("%d\n",arr[i] );
  return 0;

}
