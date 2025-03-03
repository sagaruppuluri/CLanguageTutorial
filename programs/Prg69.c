#include <stdio.h>

void change( int * m )
{
   *m  += 10;
}

void main()
{
   int n = 20;

   change( n );

   printf(" %d ", n );
}
