#include <stdio.h>

void set()
{
  extern int a;
  a = 20;
}

int a ; 

void main()
{
  set();
  printf(" a is %d ", a ); /* 20 */
}