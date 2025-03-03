#include <stdio.h>

void main()
{
  int n,digit,sum;

  printf("Enter n");
  scanf("%d",&n );
 
  sum = 0;

  while( n > 0 )
  {
    digit = n % 10;
    sum += digit;
    n = n / 10 ; /* (or) n /= 10; */
  }
  
  printf("digits sum %d " , sum );

}