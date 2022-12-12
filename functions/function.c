//1. without return type without parameters/arguments.
#include<stdio.h>
void add();   //function declaration
main()
{
	add();
	add();
	add();
	add();  //function call
}
void add()     //function defination
{
	int a,b,ans;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	ans=a+b;
	printf("\n Addition = %d",ans);
}