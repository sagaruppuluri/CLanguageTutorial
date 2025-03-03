#include <stdio.h>

void main()
{
  char s[100];
  int i;

  printf("Enter some text: ");
  gets( s );

  printf("You have entered ");

  i = 0;
  while( s[i] != '\0' )
  {
     putch( s[i] );
     i++;
  } 

}