#include<stdio.h>
void main()
{
    long int n,sum,sum_of_even=0,sum_of_odd=0,i;
    printf("Enter n natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",i);
    
    sum=n*(n+1)/2;
    if(n&1==0)
    {
    sum_of_even=n*(n+2)/4;
    sum_of_odd=n*n/4;
    }
    else 
    {sum_of_even=(n-1)*(n+1)/4;
    sum_of_odd=(n+1)*(n+1)/4;}

    printf("\nSum of n natural number: %d\nSum of odd number: %d\nSum of even number: %d",sum ,sum_of_odd,sum_of_even);
}
