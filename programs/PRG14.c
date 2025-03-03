#include <stdio.h>
#include <conio.h>

void main()
{
  double basic,da,hra,pf,it,gross,net;

  clrscr();

  printf(" enter basic ");
  scanf("%lf",&basic);

  if( basic >= 0 && basic <= 10000 )
  {
    da = basic * 10 / 100;
    hra = basic * 12 / 100;
    pf = basic * 13 / 100;
    it = basic * 20 / 100;
  }
  else
  {
    da = basic * 12 / 100;
    hra = basic * 15 / 100;
    pf = basic * 18 / 100;
    it = basic * 25 / 100;
  }

  gross = basic + da + hra;
  net = gross - pf - it ;

  printf("\n Basic Salary ... %lf  ", basic );
  printf("\n Da %lf " , da );
  printf("\n hra %lf " , hra );
  printf("\n pf %lf ", pf );
  printf("\n it %lf ", it );
  printf("\n gross salary %lf ", gross );
  printf("\n net salary %lf ", net );

  getch();

}