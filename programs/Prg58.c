#include <stdio.h>
#include <conio.h>

int factorial( int n )
{
  int fact = 1,i;

  for( i = 1 ; i <= n ; i++ )
     fact = fact * i;

  return fact;
}

void main()
{
  int n,r,ncr;
  
  clrscr();

  printf(" enter n ");
  scanf("%d",&n );

  printf(" enter r ");
  scanf("%d",&r);

  ncr = factorial(n)/(factorial(r) * factorial(n-r)); 

  printf(" ncr value is %d ", ncr );

  getch();
}