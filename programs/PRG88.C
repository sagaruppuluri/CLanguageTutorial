
    #include <stdio.h>

    #define DEBUG 1

    void main()
    {
	 #if DEBUG
	   printf(" this will be printed when DEBUG is 1");
	 #endif

	 printf("\n hello");
    }