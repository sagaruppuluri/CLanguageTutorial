#include <stdio.h>

void main()
{
  int x = 2;
  switch( x )
  {
  case 1: x++;
  case 2: x-=10;
  case 3: x+=5;
  default: x+=9;
  case 4:  x+=10;
  }
  printf("%d",x);
}