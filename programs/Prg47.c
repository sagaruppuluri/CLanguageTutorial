#include <stdio.h>

void main()
{
   char name[240];

   printf("Enter your name : ");
   scanf("%[^\n]s",name);

   printf("You have entered %s ", name );
}
