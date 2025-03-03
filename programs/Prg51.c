#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  char s1[30];
  char s2[30];
  
  printf("Enter any string ");
  gets( s1 ); /* say s1:abc */

  strcpy( s2 , s1 ); /* s2:abc */

  strrev( s2 ); /* s2: cba */

  if( strcmp( s1 , s2 ) == 0 )
    printf(" it is palindrome ");
  else
    printf(" it is not palindrome ");
}