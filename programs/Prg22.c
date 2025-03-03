#include <stdio.h>

void main()
{
  int i,n;
  
  printf("Enter n");
  scanf("%d",&n );

  i = 1;
  while( i <= n )
  {
    printf(" %d " , i );
    i++;
  }
}