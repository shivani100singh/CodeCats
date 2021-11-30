#include<stdio.h>
#include<string.h>

void Goal_parser_Interpretation(char *,int);

int main()
{
    int len;
    char str[200];
    printf("Enter the string:  ");
    scanf("%s",str);

    len=strlen(str);
    Goal_parser_Interpretation(str,len);
    return 0;
}

void Goal_parser_Interpretation(char *ch,int length)
{
    int i,j=0,k;
    char output[200];
    for(i=0;i<length;i++)
    {
        if(ch[i]=='G')
            {
                output[j++]='G';
            }
        if((ch[i]=='(')&&(ch[i+1]==')'))
            {
                output[j++]='o';
            }
        if((ch[i]=='(')&&(ch[i+1]=='a')&&(ch[i+2]=='l')&&(ch[i+3]==')'))
            {
                output[j++]='a';
                output[j++]='l';
            }
    }

    printf("Output:   ");
    for(k=0;k<j;k++)
    {
        printf("%c",output[k]);
    }

}