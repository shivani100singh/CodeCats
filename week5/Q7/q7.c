//C Program to show an example of pointer to pointer
#include<stdio.h>

int main()
{
    int a;
    int *p; // pointer to integer type
    int **q;  // pointer to pointer 
    p=&a;
    q=&p;

    a=10;

    printf("Value of a: %d\n",a);
    printf("Address of a: %d\n",p);
    printf("Value of a: %d\n",*p);
    *p=20;
    printf("Address of a: %d\n",*q);
    printf("Value of a: %d\n",**q);
    return 0;
}

