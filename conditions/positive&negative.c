#include<stdio.h>
main()
{
	int num;
	printf("\nEnter a Number: ");
	scanf("%d",&num);
	
	if(num>=0)
	{
		printf("\nPositive Number!!");
	}
	else
	{
		printf("\nSorry Negative Number!!");
	}
}