#include<stdio.h>
void main(){
    int num1,num2,num3,avg;
    
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);

    avg=(num1+num2+num3)/3;

    printf("Average is:%d",avg);

}