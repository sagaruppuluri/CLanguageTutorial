#include <stdio.h>

void main()
{
  int i,n,fact;
  
  printf("Enter n");
  scanf("%d",&n );

  fact = 1;
  for( i = 1 ; i <= n ; i++ )
     fact = fact * i;

  printf(" factorial is %d " , fact );
}