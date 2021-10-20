#include <stdio.h>

int main()
{
int amount,notes[10]={2000,500,200,100,50,20,10,5,2,1},index=0,count[10]={0,0,0,0,0,0,0,0,0,0},i,c;
printf("Enter the amount: ");
scanf("%d",&amount);
c=amount;
  while (c>=2000)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=500)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=200)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=100)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
   while(c>=50)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=20)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>10)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=5)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=2)
  {
      c=c-notes[index];
      count[index]++;
  }
  index++;
  while(c>=1)
  {
      c=c-notes[index];
      count[index]++;
  }

  for(i=0;i<10;i++)
    printf("%d :%d\n",notes[i],count[i]);

    return 0;
}
