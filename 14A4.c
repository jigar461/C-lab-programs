#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n],i,sum=0,max,min;
	float avg;
	
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	int a=arr[0],b=arr[0];
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>a)
		{
			a=arr[i];
		}
		else if(arr[i]<b)
		{
			b=arr[i];
		}
	}
	printf("Sum of all elements:%d\n",sum);
	avg=sum/n;
	printf("Average of all the elements:%f\n",avg);
	printf("Maximum element is:%d",a);
	printf("Minimum element is:%d",b);
}

