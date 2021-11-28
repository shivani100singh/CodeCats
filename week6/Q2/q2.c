#include<stdio.h>
#include<string.h>

void duck_number(char *,int );

int hash[10];

int main()
{
    int len;
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);

    len=strlen(str);
    duck_number(str,len);

    return 0;
}

void duck_number(char *s,int l)
{
    int i,j=0,k;
    
    while(s[j]=='0')
    {
        j++;
    }
  
    for(i=j;i<l;i++)
    {   
        hash[s[i]-'0']++;
    }
    
    if(hash[0]!=0)
        printf("DUCK NUMBER");
    else
        printf("NOT A DUCK NUMBER");

}