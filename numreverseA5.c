#include<stdio.h>
	void main()
	{
		int num,rem,dev;
		
		printf("Enter number");
		scanf("%d",&num);//123
		
		while(num!=0){
			rem=num%10;//3
			printf("%d",rem);
			dev=num/10;//12
			num=dev;
		}
	}
