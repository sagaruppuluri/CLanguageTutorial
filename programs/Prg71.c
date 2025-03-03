#include <stdio.h>

void swap( double * p , double * q )
{
  double temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void main()
{
  double a = 10.2 , b = 20.4;

  swap( &a , &b );

  printf(" \n a is %lf ", a );
  printf(" \n b is %lf ", b );
}