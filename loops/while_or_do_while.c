#include<stdio.h>
main()
{
	int i;
//	printf("Enter a value :");
//	scanf("%d",&i);
//	while(i!=0)
//	{
//		printf("I = %d",i);
//		printf("\nEnter a value :");
//		scanf("%d",&i);
//	}
//	printf("\nYou entered Zero.");
	
	do
	{
		printf("\nEnter a value :");
		scanf("%d",&i);
		printf("I = %d",i);
	}while(i!=0);
	printf("\nYou entered Zero.");
}