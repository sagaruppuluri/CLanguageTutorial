#include <stdio.h>

void f()
{
  static int a = 0;
  a++;
  printf("\n a is %d " , a );
}

void main()
{
  f();
  f();
  f();  
}