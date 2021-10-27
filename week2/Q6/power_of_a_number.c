/*Power of a number using for loop*/
#include<stdio.h>

void power_func(int,int);

void main()
{
    int num , power,i;
    printf("Enter number and its power: ");
    scanf("%d %d",&num,&power);

    power_func(num,power);
}

void power_func(int number,int pow)
{
    int i,j,carry,digit=1,result_arr[100],product;
    result_arr[0]=1;
    for(i=1;i<=pow;i++)
    {  carry=0;
        for(j=0;j<digit;j++)
        {
            product=result_arr[j]*number+carry;
            result_arr[j]=product%10;
            carry=product/10;
        }

        while(carry!=0)
        {
            result_arr[digit]=carry;
            carry=carry/10;
            digit++;
        }
    }

    printf("Result: ");

    for(i=digit-1;i>=0;i--)
    {
        printf("%d",result_arr[i]);
    }
}