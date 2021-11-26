//Write a C program to find length of string using pointers.
#include<stdio.h>
int main()
{
    int a,b,l=0;
    char *s="helloworld";
    printf("%s\n",(s+2));

    char c[]="helloworld";
    while(c[l]!='\0')
    {
        l++;
    }

    printf("%d",l);

}