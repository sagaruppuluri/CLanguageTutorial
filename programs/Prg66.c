#include <stdio.h>

void main()
{
   float  a = 10 ;
   
   float * p = &a ;
 
   float ** q = &p ;

   **q = a + *p ;

   printf("\n %f ",   a );
   printf("\n %f ",  *p );
   printf("\n %f ", **q ); 
}