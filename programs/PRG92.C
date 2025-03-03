
  #include <stdio.h>
  #include <stdlib.h>

  void main(int argc , char * argv[] )
  {
     FILE * src , * dest ;
     char ch;

     if( argc != 3 )
     {
       printf("\a\a usage!prg92 <srcfile> <destfile>");
       exit(1);
     }

     /* Note: 
        argv[1] contains source file name and
	argv[2] contains destination file name.
	source file is opened in read mode and 
        destination in write mode.
     */

     src = fopen( argv[1] , "r" );
 
     if( src == NULL )
     {
       printf("unable to open source file");
       exit(1);
     }

     dest = fopen( argv[2] , "w" );
    
     if( dest == NULL )
     {
       printf("unable to open destination file");
       exit(1);
     }

     /* read one character from source and 
        write it to destination, 
        repeat it until source file reaches
	end of file (EOF).  */


     while( ( ch = fgetc( src ) ) != EOF )
	fputc( ch , dest );

     fclose( src );
     fclose( dest );
  }