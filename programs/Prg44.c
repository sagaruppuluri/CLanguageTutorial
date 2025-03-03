#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch;

  printf("Enter some character");
  ch = getche();

  printf("Entered character ");
  putch( ch );

  if( isalpha( ch ) ) 
    printf("\n it is in alphabet ");
  else
    printf("\n it is not in alphabet");
 
  if( isdigit( ch ) )
    printf("\n it is a digit ");
  else
    printf("\n it is not a digit ");

  printf("\n in upper case %c " , toupper(ch) );

  printf("\n in lower case %c " , tolower(ch) );  
  
}