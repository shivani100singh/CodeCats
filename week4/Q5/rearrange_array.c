#include<stdio.h>
#include<stdlib.h>

int * rearrange_array(int *,int);

void main()
{
    int i,j,n;
    int *arr;
    int *array;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    array=  rearrange_array(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
}

int* rearrange_array(int *ptr,int num)
{
    int i,j=0;
    int array[3]={0,0,0};
    
    for(i=0;i<num;i++)
    {
        
        array[ptr[i]]++;
       
    }

    for(i=0;i<3;i++)
    {
        while(array[i]--)
        {
            ptr[j++]=i;
        }
    }
   

    return ptr;

}