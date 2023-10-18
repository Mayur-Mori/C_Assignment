#include<stdio.h>
main()
{
	int year;
	printf("\n\n Enter the year :");
	scanf("%d",&year);
	
	if(year%400==0)
	printf("\n\n The entered year is a leap year");
	
	else if(year%100==0)
	printf("\n\n The entered year is not a leap year");
	
	else if(year%4==0)
	printf("\n\n The entered year is a leap year");
	
	else 
	printf("\n\n The entered year is not a leap year");
	
}
