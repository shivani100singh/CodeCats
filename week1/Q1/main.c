#include <stdio.h>

int main()
{
    int number,check;
    printf("Enter number: ");
    scanf("%d",&number);
    check=number^1;
    if(check>number)
        printf("even");
    else
        printf("odd");

    return 0;
}
