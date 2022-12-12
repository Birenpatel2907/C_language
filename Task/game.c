#include<stdio.h>
main()
{
	char c;
	int count = 1;
	printf("welcome to Quize Compitision");
	printf("\nThis is my question!!");
	
	
	again:
	printf("\n\n1. what is 5 + 5?");
	printf("\na. 4 \nb. 10 \nc. 5 \nd. 8 \n");
	fflush(stdin);
	scanf("%c",&c);
	if(c == 'b')
	{
		printf("\nAnswer is correct!!");
	}
	else
	{
		count++;
		printf("\n Sorry,Answer is wrong!!");
		if(count==3)
		{
			goto GO;
		}
		printf("\n Try Again");
		goto again;	
	}
	
	lable:
	printf("\n\n2. what is 5 - 5?");
	printf("\na. 4 \nb. 10 \nc. 0 \nd. 8 \n");
	fflush(stdin);
	scanf("%c",&c);
	if(c == 'c')
	{
		printf("\nAnswer is correct!!");
	}
	else
	{
		count++;
		printf("\n Sorry,Answer is wrong!!");
		if(count==3)
		{
			goto GO;
		}
		printf("\n Try Again");
		goto lable;	
	}
	
	once:
	printf("\n\n3. Who is prime minister in India?");
	printf("\na. Narendra modi \nb. Yogi adityanath \nc. Amit shah \nd. Bhupendra Patel \n");
	fflush(stdin);
	scanf("%c",&c);
	if(c == 'a')
	{
		printf("\nAnswer is correct!!");
	}
	else
	{
		count++;
		printf("\nSorry,Answer is wrong!!");
		if(count == 3)
		{
			goto GO;
		}
		printf("\nTry again");
		goto once;
	}
	
	last:
	printf("\n\n4. Who is 2+2/2?");
	printf("\na. 2 \nb. 4 \nc. 0 \nd. 3 \n");
	fflush(stdin);
	scanf("%c",&c);
	if(c == 'd')
	{
		printf("\nAnswer is correct!!");
	}
	else
	{
		count++;
		printf("\nSorry,Answer is wrong!!");
		if(count == 3)
		{
			goto GO;
		}
		printf("\nTry again");
		goto last;
	}
	printf("\nYou are Winner!!");
	GO:
	printf("\n\nGAME OVER!!");	
	
}