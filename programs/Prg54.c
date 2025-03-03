#include <stdio.h>
#include <conio.h>

void main()
{
  int a[10][10];
  int n,identity;
  int i,j;

  printf("Enter n");
  scanf("%d",&n);
 
  printf("Enter values ");
  for( i = 0; i < n ; i++ )
    for( j = 0; j < n ; j++ )
       scanf("%d", &a[i][j] );

  /* say given matrix is identity matrix */
  
  identity = 1;   
  
  for( i = 0; i < n ; i++ )
  {  
    for( j = 0; j < n; j++ )
    {

       /* 
          if it is left diagonal 
          element and not 1 
       */
       
       if( ( i == j ) && ( a[i][j] != 1 ) )
       {
             identity  = 0;
             break;
       }
     
       /* 
          other than left diagonal element 
          and not 0.
       */ 

       if( ( i != j ) && ( a[i][j] != 0 ) )
       { 
             identity = 0;
             break;
       }
      
    }
 
    /* 
       if it is not identity matrix then no need to 
       proceed with further rows.
    */

    if( identity == 0 )
        break;
  } 

  if( identity == 1 )
     printf(" it is identity matrix ");
  else
     printf(" it is not identity matrix ");
}