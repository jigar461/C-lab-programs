#include<stdio.h>
void main() 
{
    int a,b,*p1,*p2;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("%d",(*p1)+(*p2));
}