#include <stdio.h>

int are_prime(int num1,int num2){
  if(num1 - num2 == 2 || num2 - num1 == 2)
      return 1;
  return 0;
}

float sum_primes(float x){
  double sum = 0,result = 0;
  for (int i = 1; ; ++i){
   result = 1/i + 1/(i+2);
   printf("%f %d\n",result,i );
   if (result < x) break;
   sum += result;
  }
  return sum;
}

float primes(int x){
  float result = 0.0, primes;
  int first = 3,second = 5;
  do{
      primes = 1.0/(first + second);
      first += 2;
      second += 2;
      result += primes;
      if(primes <= x) break;
  }while(primes >  x);
  return result;
}

int main(){
  float x = -1;
  while(x <= 0 || x >= 1) scanf("%f",&x);
  printf("%f",primes(x));
  return 0;
}


