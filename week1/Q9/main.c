#include <stdio.h>

int main()
{
    int phy,chem,maths,bio,comp,percentage,sum;
    printf("Enter marks of physics ,maths,chemistry,biology,computer: ");
    scanf("%d" "%d" "%d" "%d" "%d",&phy,&chem,&maths,&bio,&comp);
    sum=phy+chem+maths+bio+comp;
    percentage=sum/5;

    if(percentage>=90)
        printf("Grade A");
    else if(percentage>=80)
        printf("Grade B");
    else if(percentage>=70)
        printf("Grade C");
    else if(percentage>=60)
        printf("Grade D");
    else if(percentage>=50)
        printf("Grade E");
    else
        printf("Grade F");

    return 0;
}
