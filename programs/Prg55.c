#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
  int a[10][10],b[10][10],c[10][10];
  int n,m,p,q;
  int i,j,k;
  int product;

  printf("Enter n");
  scanf("%d",&n);
 
  printf("Enter m");
  scanf("%d",&m);

  printf("Enter p");
  scanf("%d",&p );
 
  printf("Enter q");
  scanf("%d",&q );

  if( m != p )
  {
     printf("multiplication not possible");

     /* exit terminates the program execution */
     exit(1);
  }
  
 
  printf("Enter first matrix ");
  for( i = 0; i < n ; i++ )
    for( j = 0; j < m ; j++ )
       scanf("%d", &a[i][j] );

  printf("Enter second matrix ");
  for( i = 0; i < p ; i++ )
    for( j = 0; j < q ; j++ )
       scanf("%d", &b[i][j] );

  /* multiplication logic */

  for( i = 0; i < n ; i++ )
  {
   for( j = 0; j < q ; j++ )
   {
     product = 0;
    
     for( k = 0; k < m ; k++ )
       product += a[i][k] * b[k][j] ;
   
     c[i][j] = product;
   }
  }

  printf(" multiplication result \n ");
  for( i = 0; i < n ; i++ )
  {
    printf("\n");

    for( j = 0; j < q ; j++ )
       printf(" %d" , c[i][j] ); 
  }
}