#include <stdio.h>

void main()
{
  int i,n;
  
  printf("Enter n");
  scanf("%d",&n );

  i = 1;
  while( i <= 10 )
  {
    printf("\n %d x %d = %d ", n,i,n*i );
    i++;
  }
}