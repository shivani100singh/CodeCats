#include<stdio.h>
void main()
{
   int G;   //Number of games
    int T,I,N,Q,result; // T- for test cases  N- number of coins Q- whether to find number of head or tail
    scanf("%d",&T);      // I- initial position of all N coins
    while(T--)
    {   
  
        scanf("%d",&G);
      
        while(G--)
        {   
            scanf("%d %d %d",&I,&N,&Q);
            
            result=N/2;
            
            if(N&1==0)
            printf("%d",result);
            else
            {
             if(I==Q)
                result=N/2;
             else
                result=(N+1)/2;
            }   
        printf("%d\n",result);
       
        }
    }

}