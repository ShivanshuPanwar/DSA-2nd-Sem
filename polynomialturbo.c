#include<stdio.h>
#include<conio.h>
#include<alloc.h>


typedef struct node{
int coeff;
int power;
struct node *next;
}node;

void main(){
node *poly1,*poly2,*poly3;

int choice,element,after,before;
void readPolynomial(node **);
void printPolynomial(node *);
void addPolynomial(node *, node *,node**);
void addNode(node **,int, int);
poly1=poly2=poly3=NULL;
clrscr();
printf("Enter first polynomial\n");
readPolynomial(&poly1);

printf("Enter second polynomial\n");
readPolynomial(&poly2);
addPolynomial(poly1,poly2,&poly3);
printf("\n Sum of polynomial\n");
printPolynomial(poly1);
printf("\nand\n");
printPolynomial(poly2);
printf("nis\n");
printPolynomial(poly3);
getch();
}
void addNode(node **ptr,int coef,int powe){
 node *tempptr;
 tempptr=(node *)malloc(sizeof(node));
 tempptr->coeff=coef;
 tempptr->power=powe;
 if(*ptr ==NULL)
 {
  tempptr->next=NULL;
  *ptr=tempptr;
 }
 else
 {
 tempptr->next=*ptr;
 *ptr=tempptr;
 }
}
void readPolynomial(node **p){
 int coeficient, power;
 printf("\nEnter the terms in the ascending order of power");
 while(1)
 {
  printf("\nEnter the degree of x: ");
  scanf("%d",&power);
  printf("Enter the coeficient: ");
  scanf("%f",&coeficient);
  addNode(p,coeficient,power);
  printf("\nAny more term(Y/N) ? : ");
 // if(Toupper(getch())=='Y';)
  //break;
 }
}
void printPplynomial(node *ptr){
 if(ptr !=NULL)
 printf("%dx^%d",ptr->coeff,ptr->power);
 for(ptr=ptr->next;ptr!=NULL;ptr=ptr->next)
 {
  if(ptr->coeff >0)
  printf(" + ");
  if(ptr->power==0)
  printf("%d",ptr->coeff);
  else if(ptr->power==1)
  printf("%dx",ptr->coeff);
  else
  printf("%dx^%d",ptr->coeff,ptr->power);
 }
}
void addPolynomial(node *ptr1,node *ptr2,node **ptr3)
{
int powe;
float coef;
while((ptr1!= NULL) && (ptr2 != NULL))
{
if(ptr1->power > ptr2->power){
coef=ptr1->coeff;
powe=ptr1->power;
ptr1=ptr1->next;
}
else if(ptr1->power < ptr2->power){
coef=ptr2->coeff;
powe=ptr2->power;
ptr2=ptr2->next;
}
else {
coef=ptr1->coeff + ptr2->coeff;
powe=ptr1->power;
ptr1=ptr1->next;
ptr2=ptr2->next;
}
if(coef!=0){
addNode(ptr3,coef,powe);
}
if(ptr1==NULL){
for( ; ptr2!=NULL;ptr2=ptr2->next)
addNode(ptr3,ptr2->coeff,ptr2->power);
}
else if(ptr2==NULL)
{
for( ;ptr1 !=NULL;ptr1=ptr1->next)
addNode(ptr3,ptr1->coeff,ptr1->power);
}
}
}