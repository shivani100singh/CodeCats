#include<stdio.h>
#include<stdlib.h>
void shift_by_one(int *,int,int);
void rotate_by_k_steps(int *,int,int);

void main()
{

    int i,size,k,shift;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d",&size);

    arr=(int *)malloc(size*sizeof(int));

    printf("Enter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter shift: ");
    scanf("%d",&k);

    shift=k%size;   

    rotate_by_k_steps(arr,shift,size);

}

void rotate_by_k_steps(int *ptr,int shift,int num)
{  
    int i;

    if(shift<1)
        {for(i=0;i<num;i++)
            printf("%d ",ptr[i]);
        return ;
        }
    else
        {
        shift_by_one(ptr,shift,num);
        }
    
}


void shift_by_one(int *ptr,int shift,int n)
{
    int i,c;
    c=ptr[n-1];
    for(i=(n-1);i>0;i--)
    {
       ptr[i]=ptr[i-1];
    }
    ptr[0]=c;
    shift--;
    rotate_by_k_steps(ptr,shift,n);
   
}