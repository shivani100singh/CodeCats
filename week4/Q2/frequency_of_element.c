// Frequency of each element of array and to check whether a element exist in array or not

#include<stdio.h>
#include<stdlib.h>

void count_frequency(int *,int,int,int);

void main()
{
    int num,i,j,max,check_num;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d",&num);
    
    arr=(int *)malloc(num*sizeof(int));

    printf("Enter elements: ");
    for(i=0;i<num;i++)
       {
           scanf("%d",&arr[i]);
            if(max<arr[i])
            max=arr[i];
       }
    printf("Enter element to check it is present or not: ");
    scanf("%d",&check_num);
    count_frequency(arr,num,max,check_num);

    free(arr);

}

void count_frequency(int *ptr,int n,int maximum,int check_n)
{
    int i,j,t;
    int *freq,*check;
    freq=(int *)malloc((maximum+1)*sizeof(int));
    check=(int *)malloc((maximum+1)*sizeof(int));
    
    for(i=0;i<maximum;i++)
       {
           freq[i]=0;
           check[i]=0;
        }

    for(i=0;i<n;i++)
    {
        freq[ptr[i]]++;
        check[ptr[i]]=1;
    }
     
    for(i=0;i<maximum;i++)
    {
       if(freq[i]!=0)
       {
            printf("%d-%d times\n",i,freq[i]);
       }
    }

    if(check[check_n]==1&& check_n<=maximum) //By hashing
    printf("%d is present in array (By Hashing)\n",check_n);
    else
    printf("%d is not present in array ",check_n);
    
    for(i=0;i<n;i++)
    {
        if(ptr[i]==check_n)
        {
            printf("%d is present in array ",check_n);
            printf("(By linear search)");
            break;
        }
    }

    free(ptr);
    free(check);
    
}