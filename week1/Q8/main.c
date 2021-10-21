#include <stdio.h>
#include<math.h>
#define eqn ax^2+bx+c
int main()
{
    int a,c,b,Determinant,root;
    float root1,root2;
    printf("Enter value of coefficients: ");
    scanf("%d" "%d" "%d",&a,&b,&c);
    Determinant=pow(b,2)-4*a*c;
    if(Determinant<0)
    {
        printf("Imaginary roots");
    }
    else if(Determinant==0)
    {
        root=-b/(2*a);
        printf("Roots of this equation are equal:  %d",root);
    }
    else if(Determinant>0)
    {
        root1=(-b+sqrt(Determinant))/2*a;
        root2=(-b-sqrt(Determinant))/2*a;
     printf("Roots of quadratic equation:  %0.2f   " "%0.2f",root1 ,root2);
    }

    return 0;
}
