//1. without return type with parameters/arguments.
#include<stdio.h>
void add(int c,int d);   
main()
{
	int a,b;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	
	add(a,b);
	add(45,12);
}
void add(int c,int d)     
{
	int ans;
	ans = c + d;
	printf("\n Addition = %d",ans);
}