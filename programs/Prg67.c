#include <stdio.h>

void setzero( int * p )
{
  *p = 0;
}

void main()
{
  int a ;

  setzero( &a );

  printf("%d",a);
}