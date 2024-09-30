#include <stdio.h>
#include <stdlib.h>
#define maxstock 200
#include "head.h"
typedef struct stock_struct
{
    int code;
    char name[25];
    float price;
    int quantityA;
    int quantityC;
} stock;

stock array_stock[maxstock];
int nbs=0,i,j;



void add_stock()
{
    stock s;
    printf("Code:");scanf("%d",&s.code);
    printf("\n");
    fflush(stdin);
    printf("Name:");gets(s.name);
    printf("\n");
    printf("Price:");scanf("%f",&s.price);
    printf("\n");
    printf("Quantity:");scanf("%d",&s.quantityA);
    s.quantityC=0;
    if (nbs<maxstock)
    {array_stock[nbs]=s;nbs++;}
    else
    {printf("UNABLE TO ADD STOCK\n") ;}
}
void list_stock()
{

    printf("LIST OF STOCK\n");
    printf("  \tCODE\tNAME\tPRICE\tQ.Available\tQ.Used\n");
    for(i=0;i<nbs;i++)
    {
        stock s=array_stock[i];
        printf("%d\t%d\t%s\t%.2f\t%d\t%d",i+1,s.code,s.name,s.price,s.quantityA,s.quantityC);
        printf("\n");
    }

}

void search_stock()
{
    int code;
    printf("PLEASE ENTER STOCK CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbs;i++){
        stock s=array_stock[i];
        if(s.code == code)
            {
        printf("  \tCODE\tNAME\tPRICE\n\n");
        printf("%d\t%d\t%s\t%.2f\n", i+1, s.code, s.name, s.price);
            return;
            }
    }
    printf("UNABLE TO FIND STOCK");return;
}
void delete_stock()
{
    int code;
    printf("PLEASE ENTER STOCK CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbs;i++){
        stock s=array_stock[i];
        if(s.code == code)
        {
            for(j=i;j<nbs;j++)
            {
                array_stock[j]=array_stock[j+1];
            }
            nbs--;
            printf("DELETION COMPLETE:\n");return;
        }}
    printf("UNABLE TO REMOVE STOCK\n");return;

}


void buy_stock()
{
int code;
int addedQ;
printf("Enter code:");
scanf("%d",&code);
printf("\n");
for(i=0;i<nbs;i++)
{
   stock s=array_stock[i];
        if(s.code == code)
            {
        printf("  \tCODE\tNAME\tPRICE\nQUANTITEv\tUSED\n");
        printf("%d\t%d\t%s\t%.2f\n", i+1, s.code,s.name, s.price,s.quantityA);
        printf("Enter quantity added:");
        scanf("%d",&addedQ);
        array_stock[i].quantityA+=addedQ;
}
}
}

void loststockfunction()
{
    lossstockvalue=0;
    float sum_stock=0;

  for(i=0;i<nbs;i++)
  {
      stock s=array_stock[i];
      sum_stock=s.price*s.quantityC;
      lossstockvalue+=sum_stock;
  }
}

void usedstockreset()
{
    for(i=0;i<nbs;i++)
    {
        array_stock[i].quantityC=0;
    }
}

void use_stock()
{
int code;
int usedQ;
printf("Enter code:");
scanf("%d",&code);
printf("\n");
for(i=0;i<nbs;i++)
{
   stock s=array_stock[i];
        if(s.code == code)
            {
        printf("  \tCODE\tNAME\tPRICE\n\n");
        printf("%d\t%d\t%s\t%.2f\n", i+1, s.code, s.name, s.price);
        printf("Enter quantity added:");
        scanf("%d",&usedQ);
        array_stock[i].quantityC+=usedQ;
        array_stock[i].quantityA-=usedQ;
            return;
}

}}

void edit_stock()
{
    int choice=0;
    printf("Adding/removing stock menu:\n");printf("\n");
    printf("1 . Add stock:\n");printf("\n");
    printf("2 . Substract stock quantity data:\n");printf("\n");
    printf("3 . Exit\n");
    scanf("%d",&choice);
    if
        (choice==1)
    {
    list_stock();
    buy_stock();
    }
    else if (choice==2)
    {
    list_stock();
    use_stock();
    }
    else if (choice==3) return;

}

void menulist_stock()
{
    printf("EMPLOYEE MANAGEMENT MENU:\n");
    printf("\n");
    printf("  1 : Add a new stock\n");
	printf("  2 : List all stocks\n");
	printf("  3 : Delete a stock \n");
	printf("  4 : Edit stock\n");
	printf("  5 : Exit to main menu \n");

}
void process_stock ()
{

    int choice;
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:add_stock();break;
    case 2:list_stock();system("pause");break;
    case 3:delete_stock();break;
    case 4:edit_stock();break;
    case 5: main();break;
    default:printf("ERROR!\n");system("pause");

    }

}

void gestion_stock()
{

    while(1)
    {
        system("cls");
        menulist_stock();
        process_stock();
    }

 }
