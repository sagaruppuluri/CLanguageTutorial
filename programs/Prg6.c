#include <stdio.h>

void main()
{
  int a=10,b=10,c,d,e,f,g,h;

  c = ( a == b );
  d = ( a != b );
  e = ( a < b );
  f = ( a > b );
  g = ( a <= b );
  h = ( a >= b );

  printf(" c is %d " , c );
  printf(" d is %d " , d );
  printf(" e is %d " , e );
  printf(" f is %d " , f );
  printf(" g is %d " , g );
  printf(" h is %d " , h );
}