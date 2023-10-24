#include<stdio.h>
void main()
{
    int a,b,*p1,*p2;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    p2=&a;
    p1=&b;
    printf("a=%d\nb=%d",*p1,*p2);
}