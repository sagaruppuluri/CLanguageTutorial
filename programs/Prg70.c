#include <stdio.h>

void copy( int * dest  , int value )
{
    *dest = value;
}

void main()
{
   int m , n = 20;

   copy( &m , n );

   printf("\n n is %d ", n );
   printf("\n m is %d ", m ); 
}
