#include <stdio.h>
#include <conio.h>

void main()
{
  int max , n1 , n2 , num ;

  clrscr();

  printf(" Enter maximum value ");
  scanf( "%d" , &max );

  n1 = 0;
  n2 = 1;

  if( max >= 1 )
  {
    printf( " %d" , n1 );
    printf( " %d" , n2 );
  }

  while( n1 + n2 <= max )
  {
    num = n1 + n2 ;
    printf( " %d" , num );
    n1 = n2;
    n2 = num;  
  }
}