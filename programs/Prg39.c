#include <stdio.h>
#include <conio.h>

void main()
{
  int a[5];
  int i;

  printf("Enter values into an array");
  for( i = 0 ; i < 5 ; i++ )
    scanf( "%d" , &a[i] );

   printf("Values in an array ");
   for( i = 0 ; i < 5 ; i++ )
     printf(" %d", a[i] );
}
