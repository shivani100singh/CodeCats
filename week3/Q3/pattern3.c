/* Create this pattern 

      *
    * * *
  * * * * *
* * * * * * *

*/

#include<stdio.h>

void main()
{
    int num,k,rows,j;
    printf("Enter number of rows: ");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++)
    {
      for(j=num-rows;j>=1;j--)
          printf(" ");

      for(k=1;k<=(2*rows-1);k++)
          printf("*");
        
      if(rows!=num)
          printf("\n");
    }

}