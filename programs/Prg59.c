#include <stdio.h>

int prime( int n )
{
   int i;
  
   if( n <= 1 )
     return 0; /* not prime */


   for( i = 2 ; i <= n / 2 ; i++ )
      if( n % i == 0 )
         return 0; /* not prime */

   return 1;  /* it is prime */
}

void main()
{
  int m;
  
  printf("Enter some value ");
  scanf("%d",&m );
 

  if( prime(m) == 1 )
    printf(" it is prime ");
  else
    printf(" it is not prime ");
}
