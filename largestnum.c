#include<stdio.h>
void main()
{
    int num1,num2,num3;

    printf("Enter the 1st number:");
    scanf("%d",&num1);

    printf("Enter the 2nd number:");
    scanf("%d",&num2);

    printf("Enter the 3rd number:");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
        {printf("1st number is the largest");}
    else if(num2>num1 &&  num2>num3)
        {printf("2nd number is the largest");}
    else{printf("3rd number is the largest");}
}