#include<stdio.h>
#include<string.h>
main()
{
	int i,j=0,len;
	char str[20];
	char str1[20];
	printf("\n\n Enter the string :");
	gets(str);
	 printf("\n %s",str);
	
	
	len=strlen(str);
	printf("\n\n %d ",len);
	for(i=len-1;i>=0;i--)
	{
		str1[j]=str[i];
		j++;
	}
	
	puts(str1);

}
