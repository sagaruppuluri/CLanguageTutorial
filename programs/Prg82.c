#include <stdio.h>
#include <conio.h>

struct Product
{
   int pcode;
   char name[20];
   int qty;
   double rpi;
   double amount;
};

void read( struct Product arr[] , int n )
{
  int i;

  for( i = 0 ; i < n ; i++ )
  {
    printf("\n Enter product details ");

    printf("\n Enter pcode : ");
    scanf("%d" , &arr[i].pcode );
  
    printf("\n Enter name : " );
    scanf("%s" , arr[i].name );

    printf("\n Enter quantity : " );
    scanf("%d" , &arr[i].qty );

    printf("\n Enter rate per item : " );
    scanf("%lf" , &arr[i].rpi );

    arr[i].amount = arr[i].qty * arr[i].rpi ;
  }
}

void printline( int n )
{
 int i;
 printf("\n");
 for( i = 1; i <= n ; i++ )
   putch('-');
}

void display( struct Product arr[] , int n )
{
   double total,tax;
   int i;
   
   total = 0;

   clrscr();

   printline(59);
   printf("\n");

   printf("%-10s %20s %5s %10s %10s",
          "code","name","qty","rpi","amount");

   printline(59);

   for( i = 0 ; i < n ; i++ )
   {
      total += arr[i].amount;

      printf("\n%-10d ",arr[i].pcode );
      printf("%20s ",arr[i].name);
      printf("%5d ",arr[i].qty );
      printf("%10.2lf ",arr[i].rpi );
      printf("%10.2lf ",arr[i].amount );
   }

   tax = total * 0.12;

   printline(59);

   printf("\n");
   printf("%48s","total");
   printf("%11.2lf",total);

   printf("\n");
   printf("%48s","tax");
   printf("%11.2lf",tax);
   printline(59);

   printf("\n");
   printf("%48s","amount");
   printf("%11.2lf",total+tax);

   getch();
}

void main()
{
  struct Product products[20];
  int n;

  clrscr();

  printf(" Enter number of products ");
  scanf("%d",&n);

  read( products , n );

  display( products , n );
}



/*
add this function for a simple bug in
Turbo C.
*/


void link()
{
  double a,*b=&a;
  a=*b;
}