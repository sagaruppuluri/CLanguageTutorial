#include <stdio.h>
#include <conio.h>

double add( double x , double y );

void main()
{
  double a = 10.2 , b = 20.4;
  double c;
  
  clrscr();

  c = add( a , b );

  printf(" %lf ", c );

  getch();  
}

double add( double x , double y )
{
  return x+y;
}