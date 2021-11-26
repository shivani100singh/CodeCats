// Write a program to illustrate the use of pointers in arithmetic operations

#include<stdio.h>
void main()
{
    int a,b,sum,diff,pro,div;
    int *ptr_a,*ptr_b;
    ptr_a=&a,ptr_b=&b;
    printf("Enter numbers: ");
    scanf("%d %d",&a,&b);
    printf("Address of variable a: %d\nAddress of variable b: %d\n",&a,&b);
    sum=*ptr_a+*ptr_b;
    pro=(*ptr_a)*(*ptr_b);
    diff=(*ptr_a)-(*ptr_b);
    div=(*ptr_a)/(*ptr_b);

    printf("Sum: %d\nProduct: %d\nDifference: %d\ndiv: %d",sum,pro,diff,div);

}