#include<stdio.h>
void main()
{
    int a=10,*p;
    p=&a;
    printf("%d %d %d",a,*p,p);
}