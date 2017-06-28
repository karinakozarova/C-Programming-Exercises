#include <stdio.h>

int main() {

   unsigned int a = 6;	/* 00000110 */  
   unsigned int b = 5;	/* 0000 0101*/
   int c = 0;           

   c = a & b;       
   printf("a&b - %d\n", c );

   c = a | b;       /* 61 = 0011 1101 */
   printf("a|b - %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("a^b - %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("~a - %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("a << 2 - %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("a >> 2 - %d\n", c );

   return 0;
}