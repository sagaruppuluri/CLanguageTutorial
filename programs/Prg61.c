#include <stdio.h>

int f ( int n )
{
   if( n > 1 )
     return n * f( n - 1 );
   else
     return 1; 
}
 
void main()
{
  int z = f(4);
  printf(" z is %d ", z );
}