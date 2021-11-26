//Write a program to find out the greatest and the smallest among three numbers using pointers.
#include<stdio.h>

int* compare(int*,int*,int*);

int main()
{
    int num1,num2,num3;
    int *ans;
    int *ptr1,*ptr2,*ptr3;
    scanf("%d %d %d",&num1,&num2,&num3);
    ptr1=&num1;
    ptr2=&num2;
    ptr3=&num3;
    ans=compare(&num1,&num2,&num3);
    
    printf("max: %d \nmin: %d",ans[0],ans[1]);

    return 0;
}

int* compare(int *ptr1,int *ptr2,int *ptr3 )
{
     int f,l;
     int ans[2];
     int *p;
     f=(*ptr1)>((*ptr2>*ptr3)?(*ptr2):(*ptr3))?(*ptr1):((*ptr2>*ptr3)?(*ptr2):(*ptr3));
     l=(*ptr1)<((*ptr2<*ptr3)?(*ptr2):(*ptr3))?(*ptr1):((*ptr2<*ptr3)?(*ptr2):(*ptr3));
     ans[0]=f;
     ans[1]=l;
    p= ans;
    return p;
}
