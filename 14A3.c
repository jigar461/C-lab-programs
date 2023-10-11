#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n],cnt0=0,cnt1=0,i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cnt0++;
		}
		else
		{
			cnt1++;
		}
	}
	printf("Odd:%d",cnt1);
	printf("Even:%d",cnt0);
}
