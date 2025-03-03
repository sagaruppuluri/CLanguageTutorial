#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  char str[100];
  int i,len,palin;

  printf(" Enter any string ");
  gets( str );

  len = strlen( str );

  /* consider that it is palindrome */
  palin = 1;
  
  for( i = 0 ; i < len/2 ; i++ )
  {
     if( str[ i ] != str[ len-i-1 ] )
     {
        /* one doesn't match implies
           it is not palindrome  */
 
        palin = 0;
        break;
     }
  }   


  if( palin == 1 )
     printf(" it is palindrome ");
  else
     printf(" it is not palindrome ");
}