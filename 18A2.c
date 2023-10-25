#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int min(int x,int y)
{
	if(x>y)
	{
		return y;
	}
	else
	{
		return x;
	}
}
void main()
{
	int a,b,res0,res1;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	res0=max(a,b);
	printf("%d is larger\n56",res0);
	res1=min(a,b);
	printf("%d is smaller",res1);
	
}
