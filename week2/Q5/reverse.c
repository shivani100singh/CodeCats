#include<stdio.h>
void main()
{
    unsigned int number,reverse=0,remainder;
    printf("Enter number that has to be reversed: ");
    scanf("%u",&number);
    while(number>0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }

    printf("%u",reverse);
}