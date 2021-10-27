#include<stdio.h>
void main()
{
    long int number,no_of_zeros,sum=0,n,pro,i;
    printf("Enter the number: ");
    scanf("%d",&number);
    pro=1,no_of_zeros=number;
    while(no_of_zeros>0)
    {   
        pro=5*pro;
        no_of_zeros=number/pro;
        sum=sum+no_of_zeros;
    }
    printf("Number of zeros in %d is: %d",number,sum);

}