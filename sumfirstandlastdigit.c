#include<stdio.h>
void main(){
	
	int num,l,f;
	
	printf("Enter the number:");
	scanf("%d",&num);//123
	
	l=num%10;//3
	
	while(num!=0){
		f=num;
		num=num/10;
	}
	printf("%d",f);
	printf("The sum of first and last digit is:%d",f+l);
	
}

