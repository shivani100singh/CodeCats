//   X pattern
  
#include<stdio.h>
void main()
{
    int i,j,k,l,rows,num,n;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    n=num/2+1;
    for(rows=1;rows<=n;rows++)
    {
        for(j=1;j<=(rows-1);j++)
        {
            printf(" ");
        }
        printf("*");

        for(k=num-(2*rows);k>=1;k--)
        {
            printf(" ");
        }

        if(rows!=n)
        printf("*");
        
        printf("\n");
    }

    l=1;
    for(i=n+1;i<=num;i++)
    {
        for(j=(num-i);j>=1;j--)
        {
            printf(" ");
        }
        printf("*");

        for(k=1;k<=l;k++)
        {
            printf(" ");
        }
        printf("*");

        l=l+2;
        printf("\n");
    }
}