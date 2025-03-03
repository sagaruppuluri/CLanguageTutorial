#include <stdio.h>

void main()
{
  int i ;
  
  i = 1;

  while( i <= 10 )
  {
     if( i == 3 || i == 5 )
     {
         i++;
         continue;
     }
 
     printf(" %d", i );
     i++;
  }
}
