#include <stdio.h>

int longest_sequence_of_num(int num,int num_to_find);

int main(){
    int num,num_to_find;

    printf("Enter number: ");
    scanf("%d",&num);

    printf("What digit are we looking for? ");
    scanf("%d",&num_to_find);

    int result =  longest_sequence_of_num(num,num_to_find);
    printf("Result: %d\n",result);

    return 0;
}


int longest_sequence_of_num(int num,int num_to_find){

    int max = 0,count = 0,digit;

    while(num > 0){

      digit = num % 10;

      if(digit == num_to_find){
            max++;
      }else max = 0;

      if (max > count){
             count = max;
      }
      num /= 10;
    }

    return count;
}
