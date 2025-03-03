#include <stdio.h>

void main()
{
   int grade;
   double basic,da,hra,pf,it;
   double gross,net;

   printf("Enter basic salary");
   scanf("%lf",&basic);

   printf("Enter grade ");
   scanf("%d",&grade);

   switch( grade )
   {
   case 1:
          da = basic * 0.3;
          hra = basic * 0.25;
          pf = basic * 0.15;
          it = basic * 0.15;
          break;
   case 2:
          da = basic * 0.25;
          hra = basic * 0.2;
          pf = basic * 0.12;
          it = basic * 0.12;
          break;
   case 3:
          da = basic * 0.22;
          hra = basic * 0.18;
          pf = basic * 0.10;
          it = basic * 0.10;
   }

   gross = basic + da + hra ;
   net = gross - pf - it;

   printf("grade: %d" , grade);  
   printf("basic: %lf",basic);
   printf("da :%lf",da );
   printf("hra : %lf",hra );
   printf("pf : %lf",pf);
   printf("it : %lf",it);
   printf("gross: %lf",gross);
   printf("net :%lf",net );
}