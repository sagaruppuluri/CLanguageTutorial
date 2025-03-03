#include <stdio.h>

void main()
{
  printf("line 1");
  goto a;
  printf("line 2");
a:printf("line 3");
  goto b;
  printf("line 4");
b:printf("line 5");
}