#include<stdio.h>
void main()
{
	int i,j,arr[20][2];
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			if(j==0)
			{
			printf("Enter the roll no.:");
			scanf("%d",&arr[i][j]);
			}
			else
			{
				printf("Enter the marks:");
				scanf("%d",&arr[i][j]);
			}
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
