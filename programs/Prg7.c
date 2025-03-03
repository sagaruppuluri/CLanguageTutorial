#include <stdio.h>

void main()
{
  int a=10,b=20,c=30,d,e,f;

  d = ( a < b ) && ( a < c );
  e = ( a < b ) || ( a < c );
  f = ! ( a < b );

  printf(" d is %d" , d );
  printf(" e is %d" , e );
  printf(" f is %d" , f );
}