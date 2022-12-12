#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,sum;
	float per;
	
	printf("\nEnter M1: ");
	scanf("%d",&m1);
	printf("\nEnter M2: ");
	scanf("%d",&m2);
	printf("\nEnter M3: ");
	scanf("%d",&m3);
	printf("\nEnter M4: ");
	scanf("%d",&m4);
	printf("\nEnter M5: ");
	scanf("%d",&m5);
	
	sum=m1+m2+m3+m4+m5;
	printf("\nTotal mark is:%d",sum);
	
	per=sum/5;
	printf("\n Persentage is:%f",per);

	
	if(per>75)
	{
		printf("\nDistinction");
	}
	else if(per>65)
	{
		printf("\nFirst Class");
	}
	else if(per>55)
	{
		printf("\nSecond class");
	}
	else if(per>35)
	{
		printf("\nPass");
	}
	else
	{
		printf("\nFail!!");
	}
}
