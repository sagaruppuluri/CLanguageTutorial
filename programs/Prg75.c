#include <stdio.h>

void main()
{
   int b;
   b = 10;
   
   {
     int a ; /* a created here */
     a = 10;
     printf(" a is %d " , a );

   } /* a destroyed here */

   printf(" b is %d " , b );

   printf(" a is %d " , a ); /* error */
}