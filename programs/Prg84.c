#include <stdio.h>
#include <stdlib.h>

union int_or_long
{

   int  intpart ;
   long longpart ;

} somenumber; 

void main()
{
   int choice;
   
   while( 1 )
   {
      printf("\n\n");
      printf("Which value you want to enter");
      printf("\n 1: integer ");
      printf("\n 2: long ");
      printf("\n 3: quit ");
      printf("\n Enter your choice:");      
      scanf("%d",&choice);
      switch( choice )
      {
      case 1:
          printf("Enter integer value");
          scanf("%d", &somenumber.intpart );
          printf("value : %d ", somenumber.intpart );
          break;
      case 2:
          printf("Enter long value ");
          scanf("%ld",&somenumber.longpart);
          printf("value: %ld", somenumber.longpart);
          break;
      case 3:
          exit(0);
                     
      }    
   }
}
