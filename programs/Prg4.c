#include <stdio.h>

void main()
{
  int obt,tot;
  double per;

  printf("Enter obtained marks ");
  scanf("%d",&obt );
  
  printf("Enter total marks ");
  scanf("%d",&tot );
  
  per = (double)obt/tot * 100;
  
  printf(" Percentage %lf", per );
}