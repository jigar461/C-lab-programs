#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d\nb=%d",a,b);
}