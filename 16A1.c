#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter the number of rows:\n");
	scanf("%d",&m);
	printf("Enter the number of columns:");
	scanf("%d",&n);
	int arr[m][n],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element:");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
