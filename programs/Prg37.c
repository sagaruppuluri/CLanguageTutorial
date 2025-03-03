#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int n, m,prime,i,j;
 
  printf("Enter n");
  scanf( "%d" , &n );

  printf("Enter m");
  scanf( "%d" , &m );

  for( i = n ; i <= m ; i++ )
  {
     prime = 1;

     for( j = 2 ; j <= sqrt(i) ; j++ )     
     {
        if( i % j == 0 )
        {
          prime = 0;
          break;
        }
     }

     if( prime == 1 )
         printf(" %d " , i );
  }
  
}