#include<stdio.h>
#include<stdlib.h>

struct student{
   int roll_no;
   char name[30];

};

int main()
{   int i;

   struct student *stu;
   stu = (struct student *)malloc(5 * sizeof(struct student));
    for(i=0;i<5;i++)
   {
       scanf("%d %s",&stu[i].roll_no,stu[i].name);
   }
   printf("\nEntries are:  \n");
   for(i=0;i<5;i++)
   {
       printf("%d %s\n",stu[i].roll_no,stu[i].name);
   }

    return 0;
}