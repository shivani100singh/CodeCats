// sum of array elements ,sum of even and odd elements of array and sum of numbers at odd and even position in array

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,num,sum_of_all=0,sum_of_even_ele=0,sum_of_odd_ele=0,sum_even=0,sum_odd=0;
    int *arr;
    printf("Enter number of elements of array: ");
    scanf("%d",&num);
    arr= (int *)malloc(num*sizeof(int));

    for(i=1;i<=num;i++)
        scanf("%d",&arr[i]);

    for(i=1;i<=num;i++)
    {
        sum_of_all+=arr[i];

        if((i&1)==0)
        sum_of_even_ele+=arr[i];
        else
        sum_of_odd_ele+=arr[i];

        if((arr[i]&1)==0)
        sum_even+=arr[i];
        else
        sum_odd+=arr[i];

    }

    printf("Sum of all element: %d\nSum of elements at even position: %d\nSum of elements at odd position: %d",sum_of_all,sum_of_even_ele,sum_of_odd_ele);
    printf("\nsum of even elements%d\nSum of odd elements%d",sum_of_all,sum_of_even_ele,sum_of_odd_ele,sum_even,sum_odd);

}