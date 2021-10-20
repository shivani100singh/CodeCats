#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no_1,no_2,no_3,max;
    printf("Enter three numbers: ");
    scanf("%d" "%d" "%d",&no_1,&no_2,&no_3);
    max=no_3>(no_1>no_2?no_1:no_2)?no_3:(no_1>no_2?no_1:no_2);
    printf("%d",max);

    return 0;
}
