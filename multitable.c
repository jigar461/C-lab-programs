#include<stdio.h>
void main()
{
	int n,i=1,multi;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=10){
		multi=n*i;
		printf("%d*%d=%d\n",n,i,multi);
		i++;
	}
}
