#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr1[n],arr2[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
}
