#include<stdio.h>
void main()
{
   int G;
    int T,I,N,Q,result;
    scanf("%d",&T);
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