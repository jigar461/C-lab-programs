#include<stdio.h>
void main(){
	
	int base,pow,res=1;
	
	printf("Enter the base:");
	scanf("%d",&base);
	
	printf("Enter the power:");
	scanf("%d",&pow);
	
	while(pow!=0){
		res=base*res;
		pow=pow-1;
	}
	printf("%d:",res);
}
