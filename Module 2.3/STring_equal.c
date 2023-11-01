#include<stdio.h>
main()
{
	int i,flag=0,length=0,length1=0;
	char str[20],str1[20];
	
	printf("\n\n Enter the string : ");
	gets(str);
	printf("\n\n Enter the string : ");
	gets(str1);
	
	printf("\n\n Enter string is : %s",str); 
	printf("\n\n Enter string 1 is : %s",str1); 
	
	for(i=0;str[i]!='\0';i++)
	{
	length++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
	length1++;
	}
	
	if(length!=length1)
	{
		printf("\n\n String are not equal ");
	
}
else
{
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]!=str1[i])
			{
				flag=1;
			}
	}
	if(flag==1)
	{
		printf("\n\n String are not equal");
	}
	else
	printf("\n\n string are equal");
}



	
}
