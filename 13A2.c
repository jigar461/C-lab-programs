#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("enter number:");
	scanf("%d",&n);//5
	
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
