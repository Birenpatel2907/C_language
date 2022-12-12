#include<stdio.h>
main()
{
	float cen,fah;
	printf("\nEnter Temperature in Centigrade: ");
	scanf("%f",&cen);
	
	fah = (cen * 9 / 5) + 32;
	printf("\n Temperature in fahrenhit:%f",fah);
}