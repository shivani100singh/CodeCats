#include <stdio.h>

int main()
{
    float gross,salary;
    printf("Enter your Basic salary: ");
    scanf("%f",&salary);
    if(salary<=10000)
    {
        gross=salary+salary/5+(salary*8)/10;
    }
    else if(salary<=20000)
    {
        gross=salary+salary/4+salary*9/10;
    }
    else if(salary>20000)
    {
        gross=salary+(salary*3)/10+(salary*95)/100;
    }

    printf("gross salary for %f is %f",salary,gross);
    return 0;
}
