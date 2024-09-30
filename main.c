#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void mainmenulist()
{
printf("Main menu:\n");printf("\n");
printf("1 : Products\n");printf("\n");
printf("2 : Employee\n");printf("\n");
printf("3 : Stock\n");printf("\n");
printf("4 : Checking\n");printf("\n");
printf("5 : Audit\n");printf("\n");
printf("6 : Exit\n");printf("\n");
printf("Choice:");

}
void mainmenuprocess()
{
    int mainchoice;
    scanf("%d",&mainchoice);
    system("cls");
    switch(mainchoice)
    {
        case 1: gestion_product();break;
        case 2: gestion_employee();break;
        case 3: gestion_stock();break;
        case 4: caisse();break;
        case 5: comptachoice();break;
        case 6: exit(0);
        default:printf("ERROR!\n");system("pause");
    }
}
int main  ()
{
while(1)
{
    mainmenulist();
    mainmenuprocess();
}
}
