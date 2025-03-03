#include <stdio.h>
#include <conio.h>

void main()
{
   double a = 10.2;
   double *p;
   p = &a ;
 
   printf("\n value in a is %lf ", a );
   printf("\n address of a is %u " , &a );
   
   printf("\n value in p is %u ", p );
   printf("\n address of p is %u ", &p );

   printf("\n value of *p is %lf " , *p );

}