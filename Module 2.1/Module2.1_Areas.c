//to find the area of circle ,rectangle and triangle

#include<stdio.h>
main()
{
	float r,l,breadth, base ,h;
	float pi=3.14,area ;
	 printf("\n\n Input the value of radius :");
	 scanf("%f",&r);
	 
	 printf("\n\n Input the value of length :");
	 scanf("%f",&l);
	 
	 printf("\n\n Input the value of breadth :");
	 scanf("%f",&breadth);
	 
	 printf("\n\n Input the value of base :");
	 scanf("%f",&base);
	 
	 printf("\n\n Input the value of height :");
	 scanf("%f",&h);
	 
	 area=pi*(r*r);
	 printf("\n\n area of circle = %f",area);
	 
	 area=l*breadth;
	 printf("\n\n area of rectangle = %f",area);
	 
	 area=(base*h)/2;
	 printf("\n\n area of triangle = %f",area);
	 
	 
	 
	 
	 
}

