#include<stdio.h>

void main()
{
    int x,n,i,t,j=0;
    
    printf("Enter number of test cases: ");
    scanf("%d",&t);
    int input[t][2];
    printf("Enter starting location and number of jumps :\n");

    for(i=0;i<t;i++)
    {
        scanf("%d %d",&input[i][0],&input[i][1]);
    }

    printf("Output:\n");

    while(t--)
    {
            x=input[j][0];
            n=input[j][1];
        for(i=1;i<=n;i++)
        { 
            if((x&1)==0)
            {  
                x=x-i;
            }
            else
            {  
                x=x+i;
            }
        }
    j++;
    printf("%d\n",x);
    }
}