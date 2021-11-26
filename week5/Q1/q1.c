// Write a program to print the address of a variable along with it's value

#include<stdio.h>
int main()
{
    int num;
    int *add;
    add=&num;
    printf("Enter number :  ");
    scanf("%d",&num);
    printf("value of num %d\n",num);
    printf("address of num: %d\n",&num);
    printf("value of num  %d\n",*add);
    printf("address of num: %d\n",add);
    printf("address of neighbour of num: %d\n",add+1); // integer is of 4 bytes so add+4bytes = add+1
}