/* create this pattern

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
}