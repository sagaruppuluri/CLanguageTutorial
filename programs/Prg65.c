#include <stdio.h>

void main()
{
   int  a = 10 , b = 20 ; 
   int temp;

   int * p , * q;
  
   p = &a;

   q = &b;

   temp = *p;
   *p = *q;
   *q = temp;

   printf(" a is %d , b is %d ", a , b );
}