// Frequency of array elements
#include <stdio.h>
#include<stdlib.h>

void main()
{
    int i ,j,k,num,max=0,freq_num;
    int *arr,*ptr;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    printf("Enter number whose frequency has to be calculated: ");
    scanf("%d",&freq_num);
    arr=(int *)malloc(num*sizeof(int));

    for(i=0;i<num;i++)
      {scanf("%d",&arr[i]);
        
        if(max<arr[i])
        max=arr[i];
      }
    
    ptr=(int *)malloc((max+1)*sizeof(int));
    for(j=0;j<=max;j++)
    {
        ptr[j]=0;
    }

    for(i=0;i<num;i++)
    {
       ptr[arr[i]]++;
    }
     
    if(freq_num>max)
    printf("Frequency of %d is %d",freq_num,0);
    else
    printf("Frequency of %d is %d",freq_num,ptr[freq_num]); 


}