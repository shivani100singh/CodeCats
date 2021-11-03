// Largest ,second largest, Smallest and second Smallest
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,largest,second_largest,num,smallest,second_smallest;
    int *arr;
    printf("Enter number of elements in array: ");
    scanf("%d",&num);
    
    arr=(int *)malloc(num*sizeof(int));

    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);

    largest=arr[0];
    second_largest=arr[0];
    smallest=arr[0];
    second_smallest=arr[0];

    for(i=0;i<num;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest)
        {
            second_largest=arr[i];
        }

        if(arr[i]<smallest)
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest)
        {
            second_smallest=arr[i];
        }
    }


    printf("\nLargest value from array: %d\nSecond Largest number: %d\nSmallest Number: %d\nSecond Smallest number: %d",largest,second_largest,smallest,second_smallest);




}