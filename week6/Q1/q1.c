#include<stdio.h>
#include<string.h>

void check_string(char *,char *,int); // checks extra character in second string 

int hash[26];

int main()
{
    int i,len;
    char s1[100];
    char s2[100];
    
    printf("Enter first string: ");
    scanf("%s",s1);

    len=strlen(s1);

    printf("Enter second string: ");
    scanf("%s",s2);
    

    check_string(s1,s2,len);                                                                     

    return 0;
}

void check_string(char *c1,char *c2,int l1)
{
  
    int i,j;
    for(i=0;i<l1;i++)
    {
        hash[c1[i]-'a']++;
        hash[c2[i]-'a']--;
    }
    hash[c2[l1]-'a']--;
   
    for(j=0;j<26;j++)
    {
        
        if(hash[j]!=0)
        {
            printf("%c",'a'+j);
        }
    }
}



