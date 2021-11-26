//Write a C program to swap two arrays using pointers.

#include<stdio.h>
void swap_arr(int *,int *,int);
void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter 1st array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 2nd array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    swap_arr(arr,arr2,n);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n2nd array\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr2[i]);

    
}

void swap_arr(int *ptr,int *ptr2,int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr2+i);
        *(ptr2+i)=temp;
    }
}