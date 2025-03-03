#include <stdio.h>

void main()
{
  int n,digit,sum,m;

  printf("Enter n");
  scanf("%d",&n );

  
  m = n; 
  sum = 0;

  while( n > 0 )
  {
    digit = n % 10;
    sum += digit * digit * digit;
    n  /= 10 ; 
  }

  
  if( m == sum )
    printf(" it is armstrong ");
  else
    printf(" it is not armstrong");  
  

}