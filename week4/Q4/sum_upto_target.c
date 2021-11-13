#include<stdio.h>
#include<stdlib.h>

void find_indices(int *,int,int);

void main()
{
    int i,n,target;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter target: ");
    scanf("%d",&target);

    find_indices(arr,target,n);

    free(arr);
}


void find_indices(int *ptr,int trg,int num)
{
    int front,rear,sum,check=0;

    front=0,rear=num-1;
    while(rear>front)
    {
        sum=ptr[front]+ptr[rear];
       
        if(sum==trg)
        {
            printf("indices are: %d %d",front,rear);
            check=1;
            break;
        }
        else if(sum<trg)
        {
            front++;
        }
        else if(sum>trg)
        {
            rear--;
        }

    }

    if(check==0)
        printf("No two elements have sum %d",trg);
}
