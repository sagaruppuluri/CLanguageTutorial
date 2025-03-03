#include <stdio.h>
#include <conio.h>
#include <math.h>

struct Point 
{
   int x,y;
};

void main()
{
  struct Point p,q;
  double distance;
  int diffx , diffy;
  
  printf("Enter first point ");
  printf("Enter x : " );
  scanf("%d" , &p.x );
  printf("Enter y : ");
  scanf("%d" , &p.y );  

  printf("Enter second point ");
  printf("Enter x : " );
  scanf("%d" , &q.x );
  printf("Enter y : ");
  scanf("%d" , &q.y );  

  diffx = p.x - q.x ;
  diffy = p.y - q.y ;

  distance = sqrt( diffx * diffx + diffy * diffy );

  printf(" distance is %lf " , distance );
 
  getch();
  
}