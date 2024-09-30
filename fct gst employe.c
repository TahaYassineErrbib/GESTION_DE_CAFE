#include <stdio.h>
#include <stdlib.h>
#define maxemployee 200
#include "head.h"

typedef struct employee_struct
{
    int code;
    char name[25];
    float salary;
} employee;

employee array_employee[maxemployee];
int nbe=0,i,j;


void add_employee()
{
    employee e;
    printf("Code:");scanf("%d",&e.code);
    printf("\n");
    fflush(stdin);
    printf("Name:");gets(e.name);
    printf("\n");
    printf("Salary:");scanf("%f",&e.salary);
    printf("\n");
    if (nbe<maxemployee)
    {array_employee[nbe]=e;nbe++;}
    else
    {printf("UNABLE TO ADD EMPLOYEE\n") ;}
}
void list_employee()
{

    printf("LIST OF EMPLOYEES\n");
    printf("  \tCODE\tNAME\tSALARY\n\n");
    for(i=0;i<nbe;i++)
    {
        employee e=array_employee[i];
        printf("%d\t%d\t%s\t%f",i+1,e.code,e.name,e.salary);
        printf("\n");
    }

}
void search_employee()
{
    int code;
    printf("PLEASE ENTER EMPLOYEE CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbe;i++){
        employee e=array_employee[i];
        if(e.code == code)
            {
        printf("  \tCODE\tNOM\tSALAIRE\n\n");
        printf("%d\t%d\t%s\t%.2f\n", i, e.code, e.name, e.salary);
            return;
            }
    }
    printf("UNABLE TO FIND EMPLOYEE");return;
}

void lostemployeefunction()
{
    lossemployeevalue=0;

    for(i=0;i<nbe;i++)
        {
        lossemployeevalue+=array_employee[i].salary;
        }

}

void delete_employee()
{
    int code;
    printf("PLEASE ENTER EMPLOYEE CODE:\n");
    scanf("%d",&code);
    for(i=0;i<nbe;i++){
        employee e=array_employee[i];
        if(e.code == code)
        {
            for(j=i;j<nbe;j++)
            {
                array_employee[j]=array_employee[j+1];
            }
            nbe--;
            printf("DELETION COMPLETE:\n");return;
        }}
    printf("UNABLE TO REMOVE EMPLOYEE\n");return;

}
void menulist_employee()
{
    printf("EMPLOYEE MANAGEMENT MENU:\n");
    printf("\n");
    printf("  1 : Add a new employee\n");
	printf("  2 : List all employees\n");
	printf("  3 : Find an employee by his code\n");
	printf("  4 : Delete an employee by his code\n");
	printf("  5 : Exit to main menu \n");
}


void process_employee ()
{

    int choice;
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:add_employee();break;
    case 2:list_employee();system("pause");break;
    case 3:search_employee();system("pause");break;
    case 4:delete_employee();break;
    case 5: main();break;
    default:printf("ERROR!\n");system("pause");
    }

}


void gestion_employee()
{

    while(1)
    {
        system("cls");
        menulist_employee();
        process_employee();

    }

}
