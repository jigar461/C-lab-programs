#include<stdio.h>
void main(){
	
	int a,b,c;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	
	(a>b)?((a>c)?printf("a is the largest"):printf("c is the larsgest")):((b>c)?printf("b is the largest"):printf("c is the largest"));
	
}
