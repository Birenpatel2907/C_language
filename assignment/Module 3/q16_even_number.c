#include <stdio.h>
void main()
{
	int i,n;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&n);
	printf("\nEVEN NUMBERS BETWEEN 1 AND %d ARE: \n",n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d ",i);
	}

}