#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n],i,cnt=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%3==0)
		{
			cnt++;
		}
	}
	printf("Number of elements devided by 3 is:%d",cnt);
}
