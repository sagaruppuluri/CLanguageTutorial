#include <stdio.h>
#include <conio.h>

void main()
{
  int n,i,j,k;
  
  printf( " Enter n " );
  scanf( "%d" , &n );


  /* for n lines */

  for( i = 1 ; i <= n ; i++ )
  {

     /* a for loop for blank spaces 
        and it is followed by a for loop for
        asterisks */


     for( j = 1 ; j <= n-i ; j++ )
       printf(" "); /* space in printf */


     for( k = 1 ; k <= 2*i-1 ; k++ )
       printf("*");


     printf("\n"); /* new line */

  }	  

}
