#include<stdio.h>
#include<string.h>
void roman_to_integer(char *,int);

int main()
{
    char s[100];
    int l;
    printf("Enter content: ");
    scanf("%s",&s);

    l=strlen(s);
   
    roman_to_integer(s,l);
    return 0;
}

void roman_to_integer(char *s2,int l)
{
    int i,sum=0;
    char s[2];
    for(i=0;i<l;i++)
    {
        s[0]=s2[i];
        s[1]=s2[i+1];

        if((s[0]=='I')&&(s[1]=='V'))
        {
            sum+=4;
            i=i+1;
        }
        else if((s[0]=='I')&&(s[1]=='X'))
        {
            sum+=9;
            i=i+1;
        }
        else if((s[0]=='X')&&(s[1]=='L'))
        {
            sum+=40;
            i=i+1;
        }
        else if((s[0]=='X')&&(s[1]=='C'))
        {
            sum+=90;
            i=i+1;
        }
        else if((s[0]=='C')&&(s[1]=='D'))
        {
            sum+=400;
            i=i+1;
        }
        else if((s[0]=='C')&&(s[1]=='M'))
        {
            sum+=900;
            i=i+1;
        }
        else if(s[0]=='I')
        {
            sum+=1;
        }
        else if(s[0]=='V')
        {
            sum+=5;
        }
        else if(s[0]=='X')
        {
            sum+=10;
        }
        else if(s[0]=='L')
        {
            sum+=50;
        }
        else if(s[0]=='C')
        {
            sum+=100;
        }
        else if(s[0]=='D')
        {
            sum+=500;
        }
        else if(s[0]=='M')
        {
            sum+=1000;
        }
  
    }

    printf("%d",sum);
}

