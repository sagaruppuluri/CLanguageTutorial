
#include <stdio.h>

enum Day {SUN,MON,TUE,WED,THU,FRI,SAT};

void main()
{
   enum  Day  day_of_the_week;

   printf("Enter dayno ");
   scanf("%d", &day_of_the_week );
  
   switch( day_of_the_week )
   {
   case SUN: 
         printf("Sunday"); break;
   case MON: 
         printf("Monday"); break;
   case TUE: 
         printf("Tuesday"); break;
   case WED: 
         printf("Wednesday"); break;
   case THU: 
         printf("Thursday"); break;
   case FRI: 
         printf("Friday"); break;
   case SAT: 
         printf("Saturday"); break;

   }  
       
}