#include <stdio.h>

void main()
{
   int i , j ;

   i = 1;

   while( i <= 10 )
   {
       j = 1;

       while( j <= 10 )
       {
          printf("\n %d x %d = %d ",i,j,i*j);
          j++;
       }
       
       i++;

       printf("\n");
       
   }
}