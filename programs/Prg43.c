#include <stdio.h>

void main()
{
  double obt,tot,per;
  char grade;

  printf("Enter obtained marks");
  scanf( "%lf" , &obt );

  printf("Enter total marks ");
  scanf( "%lf" , &tot );

  per = obt / tot * 100;
  
  if( per >= 60 )
    grade = 'A' ;
  else
  if( per >= 50 )
    grade = 'B';
  else
  if( per >= 35 )
    grade = 'C';
  else
    grade = 'D';

  printf(" Your percentage %lf ", per );
  printf(" Your grade %c ", grade ); 
}