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
		if(arr[i]<0)
		{
			cnt++;
		}
	}
	printf("There are %d negative elements in array.",cnt);
	
}
