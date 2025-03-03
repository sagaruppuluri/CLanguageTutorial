#include <stdio.h>
#include <conio.h>

void display( int b[] , int n )
{
  int i;

  for( i = 0; i < n ; i++ )
     printf(" %d ", b[i] );
}

void main()
{
  int a[] = { 10 , 20 , 30 , 40 };

  clrscr();

  display( a , 4 );

  getch();
}