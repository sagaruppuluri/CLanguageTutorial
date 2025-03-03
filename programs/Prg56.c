#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
   char s[10][20];
   char temp[20];
   int i,j,n;
  
   clrscr();

   printf("no of strings you want to enter");
   scanf("%d",&n );
 
 
   for( i = 0; i < n ; i++ )
   {
     printf(" enter string %d :" , i );
     scanf("%s" , s[i] );
   }

   for( i = 1 ; i < n ; i++ )
     for( j = 0 ; j < n - i ; j++ )
       if( strcmp( s[j] , s[j+1] ) > 0 )
       {
           strcpy( temp , s[j] );
           strcpy( s[j] , s[j+1] );
           strcpy( s[j+1] , temp );
       }       

   printf("\n strings after sort ");
   for( i = 0 ; i < n ; i++ )
      printf(" \n  %s ", s[i] );

   getch();
}