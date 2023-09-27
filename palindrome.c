#include<stdio.h>
	void main()
	{
		int num,rem,temp,sum;
		
		printf("Enter number:");
		scanf("%d",&num);//121
		temp=num;
		printf("%d",sum);
		
		while(num!=0){
			rem=num%10;//1,2,0
			sum=10*sum+rem;//1,12,
			num=num/10;//12,1
			
		}
		if(sum==temp){
			printf("Number is palindrome");
		}
		else{
			printf("Number is not palindrome");
		}
	}
