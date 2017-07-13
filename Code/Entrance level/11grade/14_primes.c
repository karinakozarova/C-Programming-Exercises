#include <stdio.h>

int is_prime(int n){
    for(int i=2; i<=n/2; ++i)
        if(n%i==0)
            return 0;
    return 1;
}

int main(){
  int x = -1,arr[9],array_num = 0;
  while(x<= 0 || x>= 10) scanf("%d",&x);
  for(int i =0;array_num < 10;i++){
    if(is_prime(i) == 1) {
        if(i % 10 == x){
            arr[array_num] = i;
            array_num++;
        }
    }

  }
  for (int i = 0; i < 10; ++i) printf("%d\n",arr[i]);
  return 0;
}
