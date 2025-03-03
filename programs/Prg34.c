#include <stdio.h>
#include <conio.h>

void main()
{
  int i,n,sign;
  double num,deno,x,result;
   
  printf("Enter no of terms ");
  scanf( "%d" , &n );
  
  printf("Enter value of x ");
  scanf( "%lf" , &x );
  
  result = 1;
  num = x;
  deno = 1;
  sign = -1;

  for( i = 2 ; i <= n ; i++ )
  {
     result += sign * ( num / deno );
     num = num * x;
     deno = deno * i;
     sign = sign * -1;
  }

  printf(" result is %lf " , result );
}