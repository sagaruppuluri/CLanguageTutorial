#include <stdio.h>
void main()
{
  int a,b,c,d,e,f;

  printf("Enter a");
  scanf("%d",&a);

  printf("Enter b");
  scanf("%d",&b);

  c = a + b;
  d = a - b;
  e = a * b;
  f = a / b;

  printf(" sum %d",c);
  printf(" dif %d",d);
  printf(" mul %d",e);
  printf(" div %d",f);
}