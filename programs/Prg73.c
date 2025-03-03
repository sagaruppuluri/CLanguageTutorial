#include <stdio.h>
#include <conio.h>

void read( int b[] , int m )
{
   int i;
   printf("\n Enter %d values \n" , m );
   for( i = 0; i < m ; i++ )
       scanf( "%d" , &b[i] );  
}

void sort( int b[] , int m )
{
   int i,j,temp;
   
   for( i = 1 ; i < m ; i++ )
     for( j = 0 ; j < m - i ; j++ )
       if( a[j] > a[j+1] )
       {
         temp = a[j] ;
         a[j] = a[j+1];
         a[j+1] = temp;
       }
}


void display( int b[] , int m )
{
  int i;
  printf("\n values are \n");
  for( i = 0; i < m ; i++ )
     printf(" %d ", b[i] );
}

void main()
{
  int n;
  int a[20];
  
  clrscr();

  printf(" Enter n ");
  scanf( "%d" , &n );

  read( a , n );
  sort( a , n );
  display( a , n );

  getch();
}