#include<stdio.h>

void main()
{
    int number,i,digit=1,factorial_array[500],j,carry,prod;
    printf("Enter number : ");
    scanf("%d",&number);
    factorial_array[0]=1;

     for(i=2;i<=number;i++)
    {   carry=0;

        for(j=0;j<digit;j++)
         {
            prod=factorial_array[j]*i+carry;
            factorial_array[j]=prod%10;
            carry=prod/10;
         }

         while(carry!=0)
         {
             factorial_array[digit]=carry;
             carry=carry/10;
             digit++;
         }
    }

    printf("Factorial of %d is: ",number);

    for(j=digit-1;j>=0;j--)
    {
        printf("%d",factorial_array[j]);
    }
   
}

