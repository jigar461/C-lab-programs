#include<stdio.h>
void main()
{
	
	float a,b;
	int choice;
	
	printf("Enter a");
	scanf("%f",&a);
	printf("Enter b");
	scanf("%f",&b);
	printf("1.addition\n2.substraction\n3.multiplication\n4.devision\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("%f",a+b);
			break;
		case 2:
			printf("%f",a-b);
			break;
		case 3:
			printf("%f",a*b);
			break;
		case 4:
			printf("%f",a/b);
			break;
		default:
			printf("Bhaag bsdk");
			break;
	}
}
