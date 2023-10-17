#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n],i,big,j;
	for(i=0;i<n;i++)
	{
		printf("Enter the elemnt:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		
			if(arr[j]>arr[j+1])
			{
				big=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=big;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
