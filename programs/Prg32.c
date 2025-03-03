#include <stdio.h>
#include <conio.h>

void main()
{
  int n,i,j;
  
  printf( " Enter n " );
  scanf( "%d" , &n );

  for( i = 1 ; i <= n ; i++ )
  {
    printf( "\n" );
   
    for( j = 1 ; j <= i ; j++ )
       printf(" %d" , j );
  }
}
