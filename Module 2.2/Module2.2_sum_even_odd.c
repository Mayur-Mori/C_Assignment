#include<stdio.h>
main()
{
	int num,i,evencount=0,oddcount=0,even=0,odd=0;
	i=0;
	while(i<10)
	{
		printf("\n\n Enter the number :");
		scanf("%d",&num);
			if(num % 2 == 0)
			{
			evencount++;
			even+=num;
			}
			else 
			{
			oddcount++;
			odd+=num;
		}
			i++;
	
	}
	printf("\n\n %d number is an even number....",evencount);
	printf("\n\n %d number is a odd number....",oddcount);
	printf("\n\n sum of even number %d",even);
	printf("\n\n sum of odd number %d",odd);
}
