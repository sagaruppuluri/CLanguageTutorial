#include <stdio.h>

void main()
{
  int n,i,prime;

  printf(" Enter n ");
  scanf( "%d" , &n );

  prime = 1; /* say 1 implies yes */

  for( i = 2 ; i <= n/2 ; i++ )
  {
     if( n % i == 0 )
     {
	prime = 0; /*  0 implies no */
        break;
     }
  }
  

  if( n != 1 && prime == 1 )
      printf(" it is prime ");
  else
      printf(" it is not prime ");
}