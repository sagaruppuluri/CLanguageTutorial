#include <stdio.h>

void main()
{
  int a = 10 , b,c,d,e;

  b = a++;
  c = ++a;
  d = a--;
  e = --a;

  printf(" a is %d ", a );
  printf(" b is %d ", b );
  printf(" c is %d ", c );
  printf(" d is %d ", d );
  printf(" e is %d ", e );
}

 