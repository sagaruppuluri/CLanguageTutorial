#include <stdio.h>
#include <alloc.h>
#include <conio.h>

void main()
{
   int   n,i;
   int * arr;

   clrscr();

   printf("Enter n");
   scanf("%d",&n);
  
   arr = (int *) malloc( n * sizeof(int) );

   if( arr == NULL )
   {
      printf("Unable to allocate memory");
      return;
   }

   printf("Enter values ");
   for( i = 0; i < n ; i++ )
     scanf("%d", &arr[i] );

   printf("Values are ");
   for( i = 0; i < n; i++ )
     printf(" %d ", arr[i] );

   free( arr );
}