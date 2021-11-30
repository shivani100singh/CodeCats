#include<stdio.h>
#include<string.h>

int Equivalent_string(char *,char *,int );

int hash1[26],hash2[26];

int main()
{
    char word1[200],word2[200];
    int len,check;

    printf("Enter first string:  ");
    scanf("%s",word1);
    len=strlen(word1);

    printf("Enter second string:  ");
    scanf("%s",word2);


    check=Equivalent_string(word1,word2,len);

    if(check==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

int Equivalent_string(char *str1,char *str2,int l)
{
    int i,j,c;
    for(i=0;i<l;i++)
    {
        hash1[str1[i]-'a']++;
        hash2[str2[i]-'a']++;
    }


    for(i=0;i<26;i++)
    {   
        c=hash1[i]-hash2[i];

        if((c<-3)||(c>3))
            {
             return 0;
            }
    }

    return 1;

}