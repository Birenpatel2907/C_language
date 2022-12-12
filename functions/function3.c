//1. with return type without parameters/arguments.
#include<stdio.h>
int add();   
main()
{
//	int a;
//	a = add();
//	printf("\nAddition = %d",a);
	printf("\nAddition = %d",add());
}
int add()     
{
	int a,b,ans;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	
	ans = a + b;
	return ans;
}