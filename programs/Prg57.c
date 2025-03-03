#include <stdio.h>

int big( int a , int b )
{
  int result;

  if( a > b )
    result = a;
  else
    result = b;

  return result;
}

void main()
{
   int z,z1;

   z = big( 10 , 20 );

   z1 = big( 30 , 10 );

   printf(" z is %d  , z1 is %d ", z , z1 );
}