#include <stdio.h>

void main()
{
  char s[100];
  int i;
  int vcount=0,ccount=0;

  printf("Enter some text: ");
  gets( s );

  for( i = 0 ; s[i] != '\0' ; i++ )
  {
    if( isalpha( s[i] ) )
    {
	switch( s[i] )
        { 
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                  vcount++;
                  break;
        default:
                  ccount++;
        }
    }
  }
 

  printf("No of vowels %d ", vcount );
  printf("No of consonents %d" , ccount );  
 
}