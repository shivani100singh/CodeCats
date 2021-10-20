#include <stdio.h>

int main()
{
    char element;
    printf("Enter the character: ");
    scanf("%c",&element);
    if(element>='0'&&element<='9')
        printf("Number\n");
    else if(element>='a'&&element<='z')
        printf("alphabet");
    else if(element>='A'&&element<='Z')
        printf("Alphabet");
    else
        printf("Special Character");

    return 0;
}
