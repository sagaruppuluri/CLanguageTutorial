#include <stdio.h>

void main()
{
  int a=5,b=6,c,d,e,f;
  
  c = a & b ;
  d = a | b ;
  e = a ^ b ;
  f = ~a;

  printf(" c is %d ", c );
  printf(" d is %d ", d );
  printf(" e is %d ", e );
  printf(" f is %d ", f );
}