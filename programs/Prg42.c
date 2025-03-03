#include <stdio.h>
#include <conio.h>

void main()
{
  int arr[10],n,i,j;
  int temp;

  printf(" Enter n ");
  scanf("%d",&n );

  printf(" Enter %d elements " , n );
  for( i=0 ; i < n ; i++ )
     scanf("%d" , &arr[i] );

  /* bubble sort logic */

  for( i = 1; i < n ; i++ )
  {
    for( j = 0 ; j < n-i ; j++ )
    {
       if( arr[j] > arr[j+1] )
       {
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
       }
    }
  }
    
  printf(" Sorted list \n ");
  for( i = 0; i < n ; i++ )
     printf(" %d",arr[i] );
}