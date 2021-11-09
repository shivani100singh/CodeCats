// Reverse input array

#include<stdio.h>
#include<stdlib.h>
void reverse(int *,int);

void main()
{
    int i,j,k,l,n;
    int *arr;
    printf("Enter size of array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));

    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);  
}

void reverse(int *array,int num)
{   
    int front,temp,rear,limit,i;
    limit=num/2;    
    rear=num-1;
    
    for(front=0;front<=limit;front++)   // Loop will run half of size of array
    {   
        temp=array[front];           // Concept of swapping two numbers
        array[front]=array[rear];
        array[rear]=temp;
        rear--;
   
    }

    printf("Reversed array: ");
    for(i=0;i<num;i++)
    printf("%d  ",array[i]);
}