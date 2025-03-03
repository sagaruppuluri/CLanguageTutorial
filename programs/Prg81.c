#include <stdio.h>
#include <conio.h>

struct Point
{
   int x,y;
};

/* ex for call by reference */

void read( struct Point  *  ptr )
{
   printf("\n Enter x : ");
   scanf("%d" , &ptr->x );
   printf("\n Enter y : ");
   scanf("%d" , &ptr->y );
}

/* ex for call by value  */

void display( struct Point  q )
{
   printf("\n x : %d ", q.x );
   printf("\n y : %d ", q.y );
}

void main()
{
  struct Point p ;
  
  read( &p );

  display( p );

}
