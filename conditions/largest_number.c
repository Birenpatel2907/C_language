#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n Enter A: ");
	scanf("%d",&a);
	printf("\n Enter B: ");
	scanf("%d",&b);
	printf("\n Enter C: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is largest Number.");
		}
		else
		{
			printf("\nc is largest Number.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nB is largest Number.");
		}
		else
		{
			printf("\nC is largest Number.");
		}
	}
}