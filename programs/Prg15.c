#include <stdio.h>

void main()
{
	int num;
	
	printf(" Enter any number ");
	scanf("%d",&num);

	switch( num )
	{
	case 1:
			printf("one");
			break;
	case 2:
			printf("two");
			break;
	case 3:
			printf("three");
			break;
	default:
			printf("not in 1 or 2 or 3 ");
			break;
	}
}
