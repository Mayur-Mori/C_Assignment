#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	printf("\n\n Enter a number :");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("\n\n Factorial of n is %d",fact);
}
