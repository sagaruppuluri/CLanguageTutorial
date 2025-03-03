#include <stdio.h>
#include <conio.h>

void main()
{
  double arr[5],big;
  int i;

  printf("Enter values into an array");
  for( i = 0 ; i < 5 ; i++ )
    scanf( "%lf" , &arr[i] );

  big = arr[0];
  for( i = 1 ; i < 5 ; i++ )
     if( arr[i] > big )
        big = arr[i];


  printf(" biggest is %lf " , big );  
}
