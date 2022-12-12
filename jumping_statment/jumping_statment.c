#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i == 7)
		{
			break;  //break switch & loop use
					//continue  loop use
		}
		printf("\nI = %d",i);
	}
}