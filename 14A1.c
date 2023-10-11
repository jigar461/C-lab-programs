#include<stdio.h>
void main()
{
	int n,i;
	
	printf("Enter the number of elements");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i=(n-1);i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
