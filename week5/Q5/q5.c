//Write a C program to access two dimensional array using pointers.
#include<stdio.h>
void main()
{
    int b,h,column,row;
    int *ptr,*ptr2;
    printf("enter rows and columns for array ");
    scanf("%d %d",&row,&column);
    int a[row][column];
      
    printf("Entry in array:\n");
    for(b=0;b<row;b++)
    {
        for(h=0;h<column;h++)
        {
            scanf("%d",&a[b][h]);
        }
    }
    printf("Entry in array:  \n");
    
    for(b=0;b<row;b++)
    {
        for(h=0;h<column;h++)
        {
        printf("%d ",*(*(a+b)+h));
        }
        printf("\n");
    }    
    

}