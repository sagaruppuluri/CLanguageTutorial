#include <stdio.h>

#define sqr(x)   x*x

void main()
{
   int a,b,c;
  
   a = sqr(4);

   b = 64 / sqr(4) ;

   c = sqr( 2+5 ); 

   printf(" a is %d ", a );
   printf(" b is %d ", b );
   printf(" c is %d ", c );
   
}