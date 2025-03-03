#include <stdio.h>

void main()
{
  int n,i,count;

  printf("Enter n");
  scanf("%d",&n );

  /* now to check whether 
     n is prime or not */

  count = 0; 
  for( i=1 ; i <= n ; i++ )
  {
    if( n % i == 0 )
    {
       count++ ;
    }
  }

  if( count == 2 )
   printf(" it is prime ");
  else
   printf(" it is not prime ");
}