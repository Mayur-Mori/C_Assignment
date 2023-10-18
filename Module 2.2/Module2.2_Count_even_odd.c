#include<stdio.h>
main()
{
	int NUM,i,evencount=0,oddcount=0;
	i=0;
	while(i<10)
	{
		printf("\n\n Enter the number :");
		scanf("%d",&NUM);
			if(NUM % 2 == 0)
			evencount++;
			
			else 
			oddcount++;
			i++;
	}
	printf("\n\n %d number is an even number....",evencount);
	printf("\n\n %d number is a odd number....",oddcount);
}
