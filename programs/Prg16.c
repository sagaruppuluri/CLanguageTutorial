#include <stdio.h>
#include <conio.h>

void main()
{
  int num;

  printf("Enter number");
  scanf("%d",&num);

  switch( num )
  {
  case 1:
  case 2:
  case 3:
         printf("one/two/three");
 	 break;
  case 4:
  case 5:
  case 6:
         printf("four/five/six");
         break;
  default:
         printf("none");
  }
}