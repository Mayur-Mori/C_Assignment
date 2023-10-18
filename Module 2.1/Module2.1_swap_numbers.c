// To swap two number without using third variable//
#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n Enter the number a :");
	scanf("%d",&a);
	printf("\n\n Enter the number b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n The swap value of a is %d",a);
	printf("\n\n The swap value of b is %d",b);
	
}
