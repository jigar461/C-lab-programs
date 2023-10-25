#include<stdio.h>
float max(float x,float y,float z)
{
	if(x>y && x>z)
	{
		return x;
	}
	else if(y>x && y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
void main()
{
	float a,b,c,res;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("enter the second number:");
	scanf("%f",&b);
	printf("Enter the third number:");
	scanf("%f",&c); 
	res=max(a,b,c);
	printf("Largest number is:%f",res);
}
