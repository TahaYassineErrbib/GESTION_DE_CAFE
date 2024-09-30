#include <stdio.h>
#include <stdlib.h>
#define maxproduct 200
#include "head.h"



typedef struct product_struct
{
    int code;
    char name[25];
    float price;
} product;

product array_product[maxproduct];
int nbp=0,i,j;



void add_product()
{

    product p;
    printf("Code:");scanf("%d",&p.code);
    printf("\n");
    fflush(stdin);
    printf("Name:");gets(p.name);
    printf("\n");
    printf("Price:");scanf("%f",&p.price);
    printf("\n");
    if (nbp<maxproduct)
    {array_product[nbp]=p;nbp++;}

}
void list_product()
{

    printf("LIST OF PRODUCTS\n");
    printf("  \tCODE\tNAME\tPRICE\n\n");
    for(i=0;i<nbp;i++)
    {
        product p=array_product[i];
        printf("%d\t%d\t%s\t%.2f",i+1,p.code,p.name,p.price);
        printf("\n");
    }

}

void search_product()
{
    int code;
    printf("PLEASE ENTER PRODUCT CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbp;i++){
        product p=array_product[i];
        if(p.code == code)
            {
        printf("  \tCODE\tNAME\tPRICE\n\n");
        printf("%d\t%d\t%s\t%.2f\n", i+1, p.code, p.name, p.price);
            return;
            }
    }
    printf("UNABLE TO FIND PRODUCT");return;
}
void delete_product()
{
    int code;
    printf("PLEASE ENTER PRODUCT CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbp;i++){
        product p=array_product[i];
        if(p.code == code)
        {
            for(j=i;j<nbp;j++)
            {
                array_product[j]=array_product[j+1];
            }
            nbp--;
            printf("DELETION COMPLETE:\n");return;
        }}
    printf("UNABLE TO REMOVE PRODUCT\n");return;

}


void caisse()
{

    i=0;
    int x=1;
    int confirm_bill;
    product p;
    int codesold,amountsold=0;
    float bill_tmp=0;
   while(x==1)
    {
    system ("cls");

    printf("List of Products:\n");
    list_product();
    printf("Code:");
    scanf("%d",&codesold);
    for(i=0;i<nbp;i++){
            product p=array_product[i];
            if(p.code == codesold)
            {
                printf("  \tCODE\tNAME\tPRICE\n\n");
                printf("%d\t%d\t%s\t%.2f\n", i+1, p.code, p.name, p.price);
                printf("Amount:");
                scanf("%d",&amountsold);
                bill_tmp=amountsold*array_product[i].price;
                printf("\n");
                printf("Bill=%.2f\n",bill_tmp);
                printf("Confirm:(1/0)\n");
                scanf("%d",&confirm_bill);
                if (confirm_bill==1)
                    {
                        gain+=bill_tmp;
                        bill_tmp=0;
                        break;
                    }
                else{
                        bill_tmp=0;
                    }

            }

}
    printf("1.Add bill?\n0.Exit.");
    scanf("%d",&x);
}
system("cls");
}
void gestion_product()
{

    while(1)
    {
        system("cls");
        menulist_product();
        process_product();

    }

}
void menulist_product()
{
    printf("PRODUCT MANAGEMENT MENU:\n");
    printf("\n");
    printf("  1 : Add a new product\n");
	printf("  2 : List all products\n");
	printf("  3 : Delete a product \n");
	printf("  4 : Search product\n");
    printf("  5 : Exit to main menu\n");

}
void process_product ()
{
    int choice;
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:add_product();break;
    case 2:list_product();system("pause");break;
    case 3:delete_product();break;
    case 4:search_product();system("pause");break;
    case 5: main();break;
    default:printf("ERROR!\n");system("pause");
    }
}



