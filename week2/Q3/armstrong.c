#include<stdio.h>
void main()
{
    int num,cube,sum=0,num1;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1=num;
    while (num1>0)
    {
        cube=num1%10;
        sum+=cube*cube*cube;
        num1=num1/10;
    }
    if(sum==num)
    printf("%d is Armstrong Number",num);
    else 
    printf("%d is not Armstrong Number",num);

}