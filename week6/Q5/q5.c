#include<stdio.h>
#include<string.h>

int jewels_and_stones(char *,char *,int,int); 

int jewels_hash_low[26],jewels_hash_up[26];  // Used two hash arrays for lowercase and uppercase letters in jewels string

int main()
{   
    char jew[200],ston[200];
    int jew_len,ston_len,no_of_jewels;
    printf("Enter jewels:  ");
    scanf("%s",jew);
    printf("Enter stones:  ");
    scanf("%s",ston);

    jew_len=strlen(jew);
    ston_len=strlen(ston);

    no_of_jewels=jewels_and_stones(jew,ston,jew_len,ston_len);

    printf("Number of jewels:  %d",no_of_jewels);

    return 0;
}



int jewels_and_stones(char *jewel,char *stone,int jewels_len,int stones_len)
{
    int i,j,count=0;

    for(i=0;i<jewels_len;i++)
    {   
        if(jewel[i]>='a'&&jewel[i]<='z')
                jewels_hash_low[jewel[i]-'a']++;
        

        if(jewel[i]>='A'&&jewel[i]<='Z')
                jewels_hash_up[jewel[i]-'A']++;
    }

    for(i=0;i<stones_len;i++)
    {

        if(stone[i]>='a'&&stone[i]<='z')
        {
            if((jewels_hash_low[stone[i]-'a'])!=0)
                {
                    count++;
                }
        }
        else if(stone[i]>='A'&&stone[i]<='Z')
        {   
            if((jewels_hash_up[stone[i]-'A'])!=0)
                {
                    count++;
                }
        }

    }

    return count;

}