
  #include <stdio.h>

  void main( int argc , char * argv[] )
  {
    int i;
    clrscr();
    printf(" no of arguments are %d ", argc );
    printf("\n they are ");
    for( i = 0; i < argc ; i++ )
      printf("\n arg %d is %s " , i , argv[i] );
    getch();
  }