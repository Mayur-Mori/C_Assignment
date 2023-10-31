#include<stdio.h>
main()
{
	float n1,n2,res;
	int choice;
	printf("\n\n Enter number 1 : ");
	scanf("%f",&n1);
	printf("\n\n Enter number 2 : ");
	scanf("%f",&n2);
	
	do
	{
		printf("\n\n *********************");
		printf("\n\n 1. Addition");
		printf("\n\n 2. Subtraction");
		printf("\n\n 3. Multiplication");
		printf("\n\n 4. Division");
		printf("\n\n 5. Exit");
		
		printf("\n\n**********************");
		
		printf("\n\n Enter your choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: res=n1+n1;
					printf("\n\n Addition of n1 and n2 is %f ",res);
					break;
			case 2: res=n1-n2;
					printf("\n\n Subtraction of n1 and n2 is %f ",res);
					break;
			case 3: res=n1*n2;
					printf("\n\n Multiplication of n1 and n2 is %f ",res);
					break;
			case 4: res=n1/n2;
					printf("\n\n Division of n1 and n2 is %f ",res);
					break;
			default: printf("\n\n You Have Entered Wrong Choice or Exit !!!... ");
					break;
		}
	}while(choice<5);
}
