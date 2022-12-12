#include<stdio.h>
main()
{
	//table with while loop
//	int i=0,numbers[4] = {2,4,5,6};
//	
//	while(i<4)
//	{
//		int j=1;
//		while(j<=10)
//		{
//			printf("%d * %d = %d\n",numbers[i],j,numbers[i]*j);
//			j++;
//		}
//		i++;
//		printf("---end---\n");
//	}


// table with do while loop
  	int i=0,numbers[4] = {7,1,4,3};
  	do
  	{
  		int j=1;
		do
		{
			printf("%d * %d = %d\n",numbers[i],j,numbers[i]*j);
			j++;			
		}while(j<=10);
		i++;
		printf("---end---\n");  	
	}while(i<4);
}