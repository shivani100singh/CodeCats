#include<stdio.h>
#include<string.h>

void longest_subsequence(char *,int,int);
int hash[26];

int main()
{
    char str[100];
    int k,l;
    printf("Enter your string:  ");
    scanf("%s",str);
    printf("Enter lower range for number of character:  ");
    scanf("%d",&k);
    l=strlen(str);

    longest_subsequence(str,l,k);

    return 0;
}

void longest_subsequence(char *ch,int len,int min)
{
    int i;

    for(i=0;i<len;i++)
    {
        hash[ch[i]-'a']++;
    }

    for(i=0;i<len;i++)
    {
        if((hash[ch[i]-'a'])>=min)
        {
            printf("%c",ch[i]);
        }
    }

}