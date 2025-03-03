
  #include <stdio.h>

  struct Product
  {
    int pcode;
    char name[20];
    double price;
  };

  void print( struct Product q )
  {
    printf("\n product details ");
    printf("\n pcode : %d ", q.pcode );
    printf("\n name : %s ", q.name );
    printf("\n price : %lf " , q.price );
  }

  void main()
  {
    FILE * fp;

    struct Product p1 = {1,"rice",90};
    struct Product p2 = {2,"wheat",50};
    struct Product p3 = {3,"sugar",20};

    struct Product temp;

    fp = fopen("product.dat","w+b");

    if( fp == NULL )
    {
      printf("Unable to open file");
      exit(1);
    }

    printf("\n Current position : %ld ", ftell(fp) ); 
	

    fwrite( &p1 , sizeof(p1) , 1 , fp ); 
    fwrite( &p2 , sizeof(p2) , 1 , fp ); 
    fwrite( &p3 , sizeof(p3) , 1 , fp ); 

    printf("\n Current position : %ld ",ftell(fp)); 

    fseek( fp , 0 , SEEK_SET ); 

    printf("\n After fseek : %ld ",ftell(fp));

    /* read each record upto end of file */
    while ( ! feof( fp ) )
    {
       fread( &temp , sizeof(temp) , 1 , fp );
       if( ! feof( fp ) )
	  print( temp );
    }

    fclose( fp );
  }


