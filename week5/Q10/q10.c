#include <stdio.h>

void entry(int *p,int n,int num);

int main()
{
    int n,n2,num,i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    n2=n;
    int arr[n];
    while(n--)
    {
    scanf("%d",&num);
    entry(arr,n,num);
    }
    
    printf("enter element to be find: ");
    scanf("%d",&num);

    i=0;
    while(i<n2)
    {
        if(arr[i]==num)
            {
                printf("element %d is present ",arr[i]);
                i=0;
                break;
            }
        i++;
    }

    if(i!=0)
    {
        printf("element is not present ");
    }

    return 0;
}

void entry(int *p,int n,int num)
{
   static int i=0;
   p[i]=num;
   i++;
}