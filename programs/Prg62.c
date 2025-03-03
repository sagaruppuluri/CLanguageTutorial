#include <stdio.h>
#include <conio.h>

int f( int n )
{
   if( n == 0 )
      return 0;
   
   if( n == 1 )
      return 1;

   return f(n-1) + f(n-2) ;
}

void main()
{
   int i,n;
   
   clrscr();

   printf("Enter n ");
   scanf("%d",&n);

   for( i = 0; i <= n ; i++ )
      printf(" %d", f(i) );

   getch();
}