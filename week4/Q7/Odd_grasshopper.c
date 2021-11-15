#include<stdio.h>

void main()
{
    int x,n,i,t,j=0,position=0;
    
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
        if(n%4==1)
            position=-n;
        else if(n%4==2)
            position=1;
        else if(n%4==3)
            position=n+1;
    j++;
  
    if(x&1)
    printf("%d\n",x-position);
    else
    printf("%d\n",x+position);
    }
}