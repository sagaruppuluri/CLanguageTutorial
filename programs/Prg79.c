#include <stdio.h>
#include <conio.h>

struct Student
{
  int sno;
  char name[20];
  double per;
};

void main()
{
   struct Student s1;
   
   printf("Enter student number ");
   scanf("%d" , &s1.sno );

   printf("Enter student name ");
   scanf("%s" , s1.name );

   printf("Enter percentage ");
   scanf("%lf" , &s1.per );

   clrscr();

   printf("\n Number : %d " , s1.sno );
   printf("\n Name   : %s " , s1.name );
   printf("\n Percentage : %lf ", s1.per );

   getch(); 
}


