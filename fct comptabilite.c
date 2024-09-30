#include <stdio.h>
#include <stdlib.h>
#include "head.h"



int percent;

void compta()
{
    printf("please enter TAX percent:");
    scanf("%d",&percent);
    printf("\n");
    loststockfunction();
    lostemployeefunction();
    printf("employeelossvalue:%.2f",lossemployeevalue);printf("\n");printf("\n");
    printf("stocklossvalue:%.2f",lossstockvalue);printf("\n");printf("\n");
    printf("productgainvalue:%.2f",gain);printf("\n");printf("\n");printf("\n");
    printf("LOSS:....- %.2f",lossemployeevalue+lossstockvalue);printf("\n");
    printf("\n");printf("\n");
    printf("GAIN:....+ %.2f",gain);printf("\n");
    printf("\n");printf("\n");

    RETURNVALUE=(gain-(lossemployeevalue+lossstockvalue))*(100-percent)/100;
    printf("AFTER TAX:.....%.2f",RETURNVALUE);
    printf("\n");printf("\n");
    system("pause");
    system("cls");

}

void resetgain()
{

    gaintable[gtn]=RETURNVALUE;
    gtn++;
    gain=0;
    usedstockreset();
    printf("Gain reseted..");
    system("pause");
}

void showgaintable()
{   int i=0;
    for(i=0;i<gtn;i++)
    {
        printf("%d_______%.2f\n",i+1,gaintable[i]);
    }
    system("pause");
}
void comptachoice()
{
    int a;
  while(1)
  {
      system("cls");
      printf("Audit menu:\n\n");
      printf("1 . Tax and Calculations\n\n");
      printf("2 . Reset gain\n\n");
      printf("3 . Show gain array\n\n");
      printf("4 . Exit\n\n");
      printf("Choice:");
      scanf("%d",&a);
      printf("\n\n");
      system("cls");
      switch (a)
       {
           case 1 :compta();break;
           case 2 :resetgain();break;
           case 3 :showgaintable();break;
           case 4 :main();break;
           default:printf("ERROR!\n");system("pause");

       }
  }
}
