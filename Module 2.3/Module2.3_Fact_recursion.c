#include<stdio.h>
main()
{
	int i,n,fact;
	printf("\n\n Enter the number whose Factorial You want :");
	scanf("%d",&n);
	
	if(n>=1)
	{
		goto factorial;
	}
	else
	{
	printf("\n\n You entered negative number or zero!!!!...");
	}
	 
	factorial:	
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("\n\n Factorial of a %d = %d ",n,fact);
	exit(0);
	
}
