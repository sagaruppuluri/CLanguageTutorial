#include <stdio.h>

void main()
{
  int n,sum,i;

  printf("Enter n");
  scanf("%d",&n );

  i = 1;
  sum = 0;

  while( i <= n )
  {
     /* if i is a factor of n */
     
     if( n % i == 0 )
         sum += i;

     i++;
  }  

  
  if( sum == 2 * n )
    printf(" it is perfect no ");
  else
    printf(" it is not perfect no");  
  

}