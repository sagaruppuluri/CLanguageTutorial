
  #include <stdio.h>
  #include <stdlib.h>

  void main( int argc , char * argv[] )
  {
    int sum = 0;
    int i;

    /* ignore zero argument since it is 
       file path itself */
	
    for( i = 1; i < argc ; i++ )
       sum += atoi( argv[i] );

    printf(" sum is %d " , sum );
  }
