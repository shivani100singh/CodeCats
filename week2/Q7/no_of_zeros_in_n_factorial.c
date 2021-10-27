#include<stdio.h>
#include<stdlib.h>
void main()
{
    long int number,no_of_zeros,sum=0,n,num,i,pro;
    int *store;int *result;
    printf("Enter number of numbers to follow: ");
    scanf("%d",&n);
    num=n;
    store=(int*)malloc(n*sizeof(int));
    result=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
       scanf("%d",&store[i]);
    
    i=0;
    while (n--)
    {
    sum=0;
    number=store[i];
    pro=1,no_of_zeros=number;
        while(no_of_zeros>0)
            {   
               pro=5*pro;
               no_of_zeros=number/pro;
               sum=sum+no_of_zeros;
            }
    result[i]=sum;
    i++;
    }
    
    for(i=0;i<num;i++)
    printf("Number of zeros in %d is: %d\n",store[i],result[i]);

}