#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void portal_design();
int menu();
int check_sign_in(char *,char *);
int check_signup(char *);

void display();
void Signin();
void Signup();
void Contact();
void wait();
int menu2();
void display2();
void buy_items();
void place_order(int *,int);

int customer_count,signed_count;


struct customer_detail
{
    char first_name[50];
    char last_name[50];
    char address[30];
    char number[15];
    char username[30];
    char email[30];
    char pwd[20];
};
struct customer_detail info[10];

struct signup
{
    char first_name[50];
    char last_name[50];
    char address[30];
    char number[15];
    char username[30];
    char email[30];
    char pwd[20];
};
struct signup person;

struct sign_in
{
    char username[30];
    char pwd[20];
};
struct sign_in user[10];
struct sign_in check;

struct item
{
    int id;
    char name[20];
    double mrp;
    int discount;
    int gst;
    double ttl_price;
};
struct item list[10]; 
int cart[100];


int main()
{
    int choice,cont;
    portal_design();
    
    wait();

    do
    {
    choice= menu();
    switch(choice)
    {
        case 1:display();wait();break;
        case 2:Signup();wait();break;
        case 3:Signin();wait();break;
        case 4:Contact();wait();break;
        case 5:printf("\nThank You For Your Visit\n");break;
        default:printf("\nPlease choose something from menu");
                printf("\n\nEnter 0 to continue:  ");
                scanf("%d",&cont);
                if(cont==0)
                    menu();
        
    }
    }while(choice!=5);
    return 0;
}

void portal_design()
{
     int i,j,k=10;
    char c='*';
    printf("\n");

    for(i=0;i<=28;i++)
    {
        printf("%c",c);
    }

    printf("\n");

    for(i=0;i<=28;i++)
    {
        printf("%c",c);
    }

    printf("\n");
    
    for(i=0;i<8;i++)
    {   
        printf("%c",c);
        if(i==4)
        { 
            printf("       Welcome to          *\n*    shopping portal        *\n*");
        }
         printf("%28c\n",c);
    }
   
    for(i=0;i<=28;i++)
    {
        printf("%c",c);
    }

    printf("\n");
    
    for(i=0;i<=28;i++)
    {
        printf("%c",c);
    }


}

int menu()
{   int choice;
    printf("\n\nWhat do you want to do:\n1 Display Items\n2 Signup\n3 Signin\n4 Contact Us\n5 Exit");
    printf("\nYour Choice:  ");
    scanf("%d",&choice);

    return choice;
}

void display()
{   
    FILE *fp;
    fp=fopen("itemlist.txt","r");
    char ch;
    do 
    {
        ch = fgetc(fp);
        putchar(ch);

    } while(ch != EOF);

    fclose(fp);
    printf("\n\nYOU HAVE TO BE LOGGED IN TO BUY THINGS\n");

    printf("\n");

}

void Signup()
{
    char first_name[50],last_name[50],address[100],username[20],email[20],password[20],number[10];
  
    int d=0;
    printf("\n\nYOU ARE IN SIGNUP PAGE\n");
   
    printf("Enter Your details:\n");
    printf("First Name:  ");
    
    scanf("%s",first_name);
    strcpy(person.first_name,first_name);

    printf("Last Name:  ");
    scanf("%s",last_name);
    strcpy(person.last_name,last_name);
    
    fflush(stdin);
    printf("Address:  ");
    gets(address);
    strcpy(person.address,address);

    printf("Phone no.:  ");
    scanf("%s",number);
    strcpy(person.number,number);
    
    printf("User Name:  ");
    scanf("%s",username);
    strcpy(person.username,username);
    
    printf("Email id:  ");
    scanf("%s",email);
    strcpy(person.email,email);

    printf("Password:  ");
    scanf("%s",password);
    strcpy(person.pwd,password);

    strcpy(check.username,person.username);
    strcpy(check.pwd,person.pwd);

    d=check_signup(person.username);

    if(d==1)
    {
    
    customer_count++;

    FILE *fp;
    fp=fopen("userdetail.txt","ab");
    fwrite(&person,sizeof(person),1,fp);
   
    fclose(fp);

    printf("YOU HAVE SUCCESSFULLY SIGNED UP\n");
    }
    else 
    {
        printf("\nTHIS USERNAME ALREADY EXISTS\n");
    }
}

void Signin()
{   
    char userid[20];
    int c=0;
    int choice;
    
    printf("Enter Your details: \n");
    printf("Username:  ");
    scanf("%s",user[0].username);
    
    printf("Password:  ");
    scanf("%s",user[0].pwd);

    c=check_sign_in(user[0].username,user[0].pwd);

    if(c==1)
        {   
            do
            {
                choice= menu2();
                if( (choice!=1) && (choice!=2) )
                {
                    printf("\nENTER VALID CHOICE\n");
                }
            } while (choice!=2);
            
        }
    else
    {
        printf("\nINVALID USERID OR PASSWORD\n");
    }    
}


void Contact()
{  
    printf("\n");
    FILE *ptr;
    char ch;
    printf("Contact Us using:\n");
    ptr = fopen("contactinfo.txt", "r");

    do 
    {
        ch = fgetc(ptr);
        putchar(ch);

    } while(ch != EOF);

    fclose(ptr);
    printf("\n");
}

void wait()
{
    printf("\nPress Enter to continue  ");
    getch();
}

int menu2()
{
    int choice;
    printf("\n1. Display Items\n2. Sign Out\n");
    printf("Your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: display2();break;
        case 2: printf("\nTHANK YOU\n");
    }

    return choice;
}

int check_sign_in(char *s1,char *p1)
{

    struct signup comp;
    
    FILE *ptr;
    ptr=fopen("userdetail.txt","rb");
    while(fread(&comp,sizeof(comp),1,ptr)>0)
    {   
        
        if( (strcmp(s1,comp.username)==0 ) && (strcmp(p1,comp.pwd)==0))
        {
            printf("\nSIGN IN SUCCESFUL\n");
            return 1;
        }
    }
    fclose(ptr);

   return 0; 

}

int check_signup(char *s1)
{
    struct signup check2;
    
    FILE *ptr;
    ptr=fopen("userdetail.txt","rb");
    while(fread(&check2,sizeof(check2),1,ptr))
    {   
      
        if(strcmp(s1,check2.username)==0)
        {
            printf("Signup not successfull\n");
            return 0;
        }
    }
    fclose(ptr);

    return 1;
}


void display2()
{
    int item[20],num,i,ch=2;

    list[0].id=101;
    strcpy(list[0].name,"Oreo");
    list[0].mrp=30;
    list[0].discount=0;
    list[0].gst=0;

    list[1].id=102;
    strcpy(list[1].name,"Bourbon");
    list[1].mrp=20;
    list[1].discount=0;
    list[1].gst=0;

    list[2].id=103;
    strcpy(list[2].name,"Jacket");
    list[2].mrp=2000;
    list[2].discount=10;
    list[2].gst=18;

    list[3].id=104;
    strcpy(list[3].name,"Jeans");
    list[3].mrp=1500;
    list[3].discount=20;
    list[3].gst=18;

    list[4].id=105;
    strcpy(list[4].name,"Item1");
    list[4].mrp=100;
    list[4].discount=0;
    list[4].gst=0;

    list[5].id=106;
    strcpy(list[5].name,"Item2");
    list[5].mrp=1000;
    list[5].discount=20;
    list[5].gst=18;

    list[6].id=107;
    strcpy(list[6].name,"Item3");
    list[6].mrp=500;
    list[6].discount=0;
    list[6].gst=0;

    list[7].id=108;
    strcpy(list[7].name,"Item4");
    list[7].mrp=3000;
    list[7].discount=30;
    list[7].gst=18;

    list[8].id=109;
    strcpy(list[8].name,"Item5");
    list[8].mrp=250;
    list[8].discount=0;
    list[8].gst=0;

    list[9].id=110;
    strcpy(list[9].name,"Item6");
    list[9].mrp=800;
    list[9].discount=10;
    list[9].gst=18;

    list[10].id=111;
    strcpy(list[10].name,"Item7");
    list[10].mrp=400;
    list[10].discount=0;
    list[10].gst=0;

    for(int i=0;i<11;i++)
    {
        printf("\nDetails of item id %d\n",list[i].id);
        printf("Item Name\t%s\n",list[i].name);
        printf("MRP\t\t%lf\n",list[i].mrp);
        printf("Discount\t%d\nGST\t\t%d\n",list[i].discount,list[i].gst);
    }
    
    printf("\nPRESS\n1 To add items in cart\n2 To go back");
    printf("\nYour choice:  ");
    scanf("%d",&ch);
    if(ch==1)
    {
        buy_items();
    }
    
}

void buy_items()
{
    int num,i,item[40],delete[40],ch,j;
    printf("\nNumber of items you want to buy: ");
    scanf("%d",&num);
    
    printf("\nTo add item in cart enter item id (If you want to buy one item twice write it's item id two times):  ");

    for(i=0;i<num;i++)
        scanf("%d",&item[i]);
    
    printf("\nThese items are in your cart :\n");
    for(i=0;i<num;i++)
    {  
         for(j=0;j<11;j++)
        {   
            if(item[i]==list[j].id)
                {
                    printf("%d   %s\n",item[i],list[j].name);
                }
        }
    }
    // printf("\n\nIf you want to delete any item enter it's item id (ENTER TWICE IF YOU HAVE TAKEN 2 PIECE OF AN ITEM AND YOU DONT WANT THEM )");
    // printf("\n\nENTER 0 IF YOU DONT WANT TO DELETE ANY THING ELSE ENTER NUMBER OF ITEMS TO DELETE ");
    printf("\n\nENTER NUMBER OF ITEMS YOU WANT TO REMOVE FROM CART ELSE ENTER 0 (Enter twice if required):  ");
    scanf("%d",&ch);
    if(ch!=0)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    {
        if(ch>num)
        {
            printf("\nTHIS NUMBER OF ITEM IS NOT IN YOUR CART");
        }
        else
        {   
            printf("ENTER ITEM ID TO REMOVE: ");
            for(i=0;i<ch;i++)
            {
                scanf("%d",&delete[i]);
            }
        

            for(j=0;j<ch;j++)
            {
                for(i=0;i<num;i++)
                {
                    if(item[i]==delete[j])
                    {
                        item[i]=0;
                        break;
                    }
                }
            }
        
    

        }
            }
    if(ch<num)
    {
    double total_cost=0,dis;
    for(i=0;i<num;i++)
    {
        for(j=0;j<11;j++)
        {
            if(list[j].id==item[i])
            {
                dis=list[j].mrp*list[j].discount/100;
                total_cost+= ( list[j].mrp-dis ) + ( list[j].gst*list[j].mrp/100 );
            }
        }
    }

    printf("\nTotal Cost: Rs %f\n",total_cost);

    printf("If you want to place order PRESS 1 else PRESS 2:  ");
    scanf("%d",&ch);
    
    if(ch==1)
        place_order(item,num);
    else if(ch==2)
        printf("\nCHECK OUR DISPLAY ITEMS SECTION\n");


    }
    

}

void place_order(int *cart,int size)
{
    int i,j;
    printf("\n\nYOUR ORDER IS PLACED\n\nTHANK YOU FOR SHOPPING FROM US\n ");
    for(i=0;i<size;i++)
    {
        
            if( cart[i]!=0) 
            {
                // printf("%d ",cart[i]);
                cart[i]=0;
            }
        
    }



}