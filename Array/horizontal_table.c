#include<stdio.h>
main()
{
	//table with while loop
	int j=1,numbers[4] = {2,4,5,6};
	
	while(j<10)
	{
		int i=0;
		while(i<4)
		{
			printf("%d * %d = %d\t",numbers[i],j,numbers[i]*j);
			i++;
		}
		j++;
		printf("---end---\n");
	}

}