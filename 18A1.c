#include<stdio.h>
int sum(int x,int y)
{
	int ans=x+y;
	return ans;
}
void main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	int ans=sum(a,b);
	printf("Sum of the numbers is=%d",ans);
}
