#include<stdio.h>
void main()
{
    char x;

    printf("Enter the x:");
    scanf("%c",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        {printf("Character is vowel");}
    else{printf("character is consonant");}
}