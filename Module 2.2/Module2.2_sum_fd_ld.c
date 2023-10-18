#include<stdio.h>
main()
{
	int n,sum=0,rem=0;
	printf("\n\n Enter a number :");
	scanf("%d",&n);
	rem=n%10;
	while(n>=10)
    {	
         
		n=n/10;
	}
	sum=n+rem;
	printf("\n\n Sum of first digit and last digit is %d",sum);
}
