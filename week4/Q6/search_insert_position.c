#include<stdio.h>
#include<stdlib.h>

void search(int *,int,int,int);

void main()
{
    int i,n,mid,target;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter target value: ");
    scanf("%d",&target);


    if(arr[n-1]<target)
        printf("index is %d",n);
    else
   {    
        mid=(n-1)/2;
        if(arr[mid]==target)
        {
            printf("%d",mid);
        }
        else if(arr[mid]>target)
        {
            search(arr,0,mid,target);

        }
        else if(arr[mid]<target)
        {
            search(arr,mid+1,n-1,target);
        }
    }
 free(arr);

}

void search(int *ptr,int i,int j,int trg)
{
    int mid_v;
    mid_v=(i+j)/2;
 
   if(i<j)
   {
     if(ptr[mid_v]==trg)
     {
         printf("Indext of %d is: %d",trg,mid_v);
      

     }
     else if(ptr[mid_v]>trg)
     {
        search(ptr,i,mid_v,trg);
     }
     else if(ptr[mid_v]<trg)
     {
        search(ptr,mid_v+1,j,trg);
     }
   }
    else if(i>=j)
    {   
        printf("%d is not in given array but it's index will be: %d\n",trg,i);
    }
}