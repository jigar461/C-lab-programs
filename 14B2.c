#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n],i,sum0=0,sum1=0;
	double avg,gm,hm;
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum0+=arr[i];
	}
	avg=sum0/n;
	gm=pow(sum0,1/n);
	for(i=0;i<n;i++)
	{
		sum1+=1/arr[i];
	}
	hm=n/sum1;
	printf("Average=%lf\nGeomatric mean=%lf\nHarmonic mean=%lf",avg,gm,hm);
	return 0;
}

