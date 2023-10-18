#include<stdio.h>
void main()
{
	int arr[3][3],i,j,cntp=0,cntn=0,cnt0=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element:");
			scanf("%d",&arr[3][3]);
			if(arr[i][j]==0)
			{
				cnt0++;
			}
			else if(arr[i][j]>0)
			{
				cntp++;
			}
			else
			{
				cntn++;
			}
		}
	}
	printf("Number of positive elements:%d",cnt0);
	printf("Numbewr of negative elements:%d",cntp);
	printf("Number of zero elements:%d",cntn);
}
