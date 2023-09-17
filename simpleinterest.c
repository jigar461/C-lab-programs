#include<stdio.h>
void main()
{
    float p,r,t,i;

    printf("Enter p:");
    scanf("%f",&p);

    printf("Enter r:");
    scanf("%f",&r);

    printf("Enter t:");
    scanf("%f",&t);

    i=(p*r*t)/100;

    printf("Simple interest is:%f",i);
}