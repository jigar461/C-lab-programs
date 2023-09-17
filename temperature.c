#include<stdio.h>
void main()
{
    float c,f;

    printf("Enter the value of the temperature in fahrenhit:");
    scanf("%f",&f);

    c=((f-32)*5)/9;

    printf("The value of temperature in celsius is %f",c);
}