#include<stdio.h>
#include<stdlib.h>

int* prime(int );

void main()
{
    int number,i,j;
    int* arr;
    printf("Enter number to be checked as prime or not: ");
    scanf("%d",&number);
    arr= prime(number);
    
    if(arr[number]==1)
    printf("%d is a prime number",number);
    else 
    printf("%d is not a prime number",number);
    
    printf("\nPrime numbers upto %d are: ",number);
    for(i=2;i<=number;i++)
    {
        if(arr[i]==1)
        printf("%d ",i);
    }

}

int* prime(int n)
{
    int i,j,c;
    int *prime_arr=(int*)malloc(n*sizeof(int));
    
    for(i=1;i<=n;i++)
    {
       prime_arr[i]=0;
    }

    for(i=2;i<=n;i++)
    { c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            c++;
            if(c>1)
            break;
        }

        if(c==1)
        prime_arr[i]=1;
    }
 
    // for(i=2;i<=n;i++)
    // {
    //     if(prime_arr[i]==1)
    //     printf("%d",i);
    // }

    return prime_arr;
}