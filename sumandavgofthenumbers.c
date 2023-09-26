#include<stdio.h>
void main(){
	int n=1,avg=0,sum=0,count=0,x;
	 
	 //printf("Enter 1 to start the process:");
	 //scanf("%d",&x);
	 
	while(n!=0){
		
		printf("Enter the number:");
		scanf("%d",&n);
		
		sum=sum+n;
	    count=count+1;
	}
	avg=sum/(count-1);
	
	printf("Sum of the number is:%d\n",sum);
	printf("Average of the sum is:%d",avg);
}
