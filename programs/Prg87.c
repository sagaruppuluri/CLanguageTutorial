#include <stdio.h>

#define sqr(x) ((x)*(x))
#define cube(x) ((x)*sqr(x))

void main()
{
  int a = cube(2+5);
  printf("%d",a);
}