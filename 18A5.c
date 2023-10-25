#include<stdio.h>
int swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Now first number is %d\n",x);
	printf("Now second number is %d",y);
}
void main()
{
	int a,b,res;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	res=swap(a,b);
}
