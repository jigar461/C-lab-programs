#include<stdio.h>
float sint(float x,float y,float z)
{
	return (x*y*z)/100;
}
void main()
{
	float p,r,t,i;
	printf("Enter the amount:");
	scanf("%f",&p);
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	printf("Enter the time in year:");
	scanf("%f",&t);
	i=sint(p,r,t);
	printf("Simple interest is=%f",i);
}
