#include<stdio.h>
main()
{
	int a;
	a = 7;
	printf("\nA = %d",a);    //7
//	a = a+1;
//	printf("\nA = %d",a);    //8
//	a+=5;                    //shorthand operator
//	printf("\nA = %d",a);    //13
	
	
	a++;     //8
	printf("\nA =%d",a++);    //8   a=9
	printf("\nA =%d",++a);   //10
	
	a--;  //9
	printf("\nA =%d",a);    //9
	printf("\nA =%d",a--);  //9  a=8
	printf("\nA =%d",--a);  //7
}