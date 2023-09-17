#include<stdio.h>
void main()
{
    int a,b,c=0;

    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("a=%d",a);
    printf("b=%d",b);
}