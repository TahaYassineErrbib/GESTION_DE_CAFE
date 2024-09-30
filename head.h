#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

void menulist_employee();
void add_employee();
void list_employee();
void search_employee();
void delete_employee();
void process_employee ();
void gestion_employee();


typedef struct employee_struct employee;

void menulist_product();
void add_product();
void list_product();
void search_product();
void delete_product();
void process_product ();
void gestion_product();


typedef struct product_struct product;

void menulist_stock();
void add_stock();
void list_stock();
void search_stock();
void delete_stock();
void process_stock ();
void gestion_stock();

typedef struct stock_struct stock;


void lostemployeefunction();
void loststockfunction();

float lossemployeevalue;
float lossstockvalue;

float gain;
float RETURNVALUE;

void caisse();
int main();
float gaintable[24];
int gtn;
void comptachoice();
void resetgain();
void showgaintable();
void usedstockreset();
#endif // HEAD_H_INCLUDED
