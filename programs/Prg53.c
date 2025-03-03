#include <stdio.h>
#include <conio.h>

void main()
{
  int a[10][10],b[10][10],c[10][10];
  int n,m;
  int i,j;

  printf("Enter n");
  scanf("%d",&n);
 
  printf("Enter m");
  scanf("%d",&m);
 
  printf("Enter first matrix ");
  for( i = 0; i < n ; i++ )
    for( j = 0; j < m ; j++ )
       scanf("%d", &a[i][j] );

  printf("Enter second matrix ");
  for( i = 0; i < n ; i++ )
    for( j = 0; j < m ; j++ )
       scanf("%d", &b[i][j] );

  /* addition logic */

  for( i = 0; i < n ; i++ )
    for( j = 0; j < m ; j++ )
       c[i][j] = a[i][j] + b[i][j] ;

  printf(" added matrix \n ");
  for( i = 0; i < n ; i++ )
  {
    printf("\n");
    for( j = 0; j < m ; j++ )
       printf(" %d" , c[i][j] ); 
  }
}