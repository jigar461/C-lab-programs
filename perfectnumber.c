#include<stdio.h>
	void main()
	{
		int num,i=1,sum=0;
		
		printf("Enter number:");
		scanf("%d",&num);
		
		while(i<num){
			if(num%i==0){
				sum=sum+i;
			}
			i++;
			}
			if(sum==num){
				printf("Number is perfect.");
			}
			else{
				printf("Number is not prefect.");
			}
		}
	
