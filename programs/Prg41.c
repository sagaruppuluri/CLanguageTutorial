#include <stdio.h>
#include <conio.h>

void main()
{
  int a[10],n,i,ele;
  int found;
  
  printf("Enter n");
  scanf("%d" , &n );

  printf("Enter elements");
  for( i=0; i < n ; i++ )
    scanf("%d", &a[i] );

  printf("Enter element to search");
  scanf( "%d" , &ele );

  found = 0; 
  for( i=0; i < n ; i++ )
  {
    if( a[i] == ele )
    {
       found = 1;
       break;
    }
  }

  if( found == 0 )
    printf(" not found ");
  else
    printf(" found "); 
  
}