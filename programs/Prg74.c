#include <stdio.h>

int a;

void read()
{
  printf(" Enter some value ");
  scanf("%d", &a );
}

void main()
{
   read();
   printf(" a is %d " , a );
}