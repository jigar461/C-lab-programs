#include<stdio.h>
void main(){
	int n;
	
	printf("enter number");
	scanf("%d",&n);
	
	if(n>=1 && n<=12){
		switch(n){
			case 2:
				printf("28");
			case 4:
				printf("30");
			case 6:
				printf("30");
			case 9:
				printf("30");
			case 11:
				printf("30");
			default:
				printf("31");			
		}
	}
		else{printf("Enter valid number");
	} 
}
	


