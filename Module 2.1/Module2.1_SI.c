// To find the simple interest 

#include<stdio.h>
main()
{
	int p,r,t;
	float SI;
	
	printf("\n\n Enter the principle amount :");
	scanf("%d",&p);
	
	printf("\n\n Enter the rate :");
	scanf("%d",&r);
	
	printf("\n\n Enter the time :");
	scanf("%d",&t);
	
	SI = (p*r*t)/100;
	printf("\n\n Simple Interest = %f",SI);
	
}
