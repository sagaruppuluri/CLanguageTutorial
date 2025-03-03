#include <stdio.h>
#include <conio.h>

void main()
{
  int n,r,f1,f2,f3,ncr,i;

  clrscr();

  printf("Enter n");
  scanf("%d",&n );

  for( r = 0 ; r <= n ; r++ )
  {
     /* find n factorial in f1 */
  
     f1 = 1;
     for( i = 1; i <= n ; i++ )
        f1 *= i;

     /* find r factorial in f2 */

     f2 = 1;
     for( i = 1; i <= r ; i++ )
         f2 *= i;

     /* find n-r fact in f3 */

     f3 = 1;
     for( i = 1; i <= (n-r) ; i++ )
         f3 *= i;

     ncr = f1 / ( f2 * f3 );
  
     printf(" %d ", ncr );
        
  }
}