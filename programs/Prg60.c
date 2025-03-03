#include <stdio.h>

int prime( int n )
{
   int i;
  
   if( n <= 1 )
     return 0; /* not prime */


   for( i = 2 ; i <= n / 2 ; i++ )
      if( n % i == 0 )
         return 0; /* not prime */

   return 1;  /* it is prime */
}

void printprimes( int n , int m )
{
   int i; 
  
   for( i = n ; i <= m ; i++ )
       if( prime( i ) == 1 )
           printf("  %d ", i );
}

void main()
{
  int start,end;
  
  printf("Enter start ");
  scanf("%d" , &start );
 
  printf("Enter end ");
  scanf("%d" , &end ); 
 
  printprimes( start , end );

}
