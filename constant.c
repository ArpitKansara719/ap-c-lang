#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	
//	constant means do not change 
//two types of declaring constant 1) #define 2) const 
	
	float radius,temp;
	printf("Enter Radius\n");
	scanf("%f",&radius);  //5
	
	temp= PI*radius*radius;
	printf("Area of circle is %f",temp);
	
	getch();
}