//1. with return type with parameters/arguments.
#include<stdio.h>
int add(int c,int d);   
main()
{
	int a,b;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	
	printf("\nAddition = %d",add(a,b));
}
int add(int c,int d)     
{
	int ans;
	ans = c + d;
	return ans;
}