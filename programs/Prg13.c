#include <stdio.h>

void main()
{
   int a,b,c,big;

   printf("Enter a");
   scanf("%d",&a);

   printf("Enter b");
   scanf("%d",&b);

   printf("Enter c");
   scanf("%d",&c);

   if( a > b && a > c )
     big = a;
   else
   if( b > c )
     big = b;
   else 
     big = c;

   printf(" biggest is %d " , big );
}