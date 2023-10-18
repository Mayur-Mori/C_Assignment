#include<stdio.h>
main()
{
	int n,sum=0,rem=0;
	printf("\n\n Enter a number :");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("\n\n Sum of digit of a num is %d",sum);
}
