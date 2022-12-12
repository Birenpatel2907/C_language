#include<stdio.h>
main()
{
	int n,s,i=0;
	printf("how many add a item? ");
	scanf("%d",&s);
	int numbers[s];
	
	while(i<s)
	{
		printf("Add Value %d: ",i+1);
		scanf("%d",&n);
		i++;
		numbers[i] = n;
	}
}