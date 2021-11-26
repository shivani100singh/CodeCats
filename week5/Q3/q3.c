//Write a C program to swap two numbers using pointers.


#include<stdio.h>
void swap(int * , int *);
int main()
{
   int a,b;
   printf("Enter 2 numbers: ");
   scanf("%d %d",&a,&b);
   swap(&a,&b); 
   printf("Swapped numbers: ");
   printf("%d %d",a,b);
}

void swap(int *a_1,int *b_1)
{
    int temp;
    temp=*a_1;
    *a_1=*b_1;
    *b_1=temp;

}