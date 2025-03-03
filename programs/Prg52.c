#include <stdio.h>

void main()
{
  int a[3][2] = {
		  { 10,20 },
                  { 30,40 },
                  { 50,60 }
                };

  int i,j;

  /* i to change row from 0 to 2
     j to change col from 0 to 1.
  */ 

  for( i = 0 ; i < 3 ; i++ )
  {
    for( j = 0 ; j < 2 ; j++ )
      printf(" %d ", a[i][j] );
 
    /* send new line character after
       to print next row in a separate
       line */
  
    printf("\n");
  }
}