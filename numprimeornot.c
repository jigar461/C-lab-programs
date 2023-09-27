#include<stdio.h>
	void main()
	{
		int num,i=1,flag=0;
		
		printf("Enter number");
		scanf("%d",&num);
		
		while(i<=num){
			if(num%i==0){
				flag++;
			}
			i++;
		}
		if(flag==2){
			printf("Number is prime.");
		}
		else{
			printf("Number is not prime.");
		}
	}
