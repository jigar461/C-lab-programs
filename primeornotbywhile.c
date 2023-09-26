#include<stdio.h>
void main(){
	int num,i=1,count=0;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	while(i<=num){
		if(num%i==0){
			count=count+1;
		}
		i++;
	}
	if(count==2){
		printf("Number is prime");
	}
	else{
		printf("Number is not prime");
	}
}
