#include<stdio.h>
#include<stdlib.h>
#include "string.h"



struct contact
{
   char* name;
   char* phone_numb;
   
   
} ;




struct cell
{
   struct cell* next;
   struct contact data;
}
  


struct list
{
  struct cell* head;
  int num;
  
  
typedef struct contact contact ;
typedef struct cell cell ;




contact create ()
{

   contact person;
   printf("entrez le nom complet");
   scanf("%s",person.name);
   printf("entrez le nnumero de télephone);
   scanf("%s",person.phone_numb);
   return person;
}  
   

void add_contact (contact person , list * L)

{
   if (L->num > 8)
   printf("contact book is full");
   else 
   {
     
     
      liste c=(liste)malloc(sizeof(cell));
      C->contact=person;
      C->suivant=NULL;
    
      if(*L==NULL)
        *L=C;
      else
       {
        liste temp=*L;
        while(temp->suivant!=NULL)
            temp=temp->suivant;
        temp->suivant=C;
        L->num++;
        }
     
  return;
 }
  
  
void affichage (list L)


{ 
   if (L.num=0)
   printf("empty contactbook");
   else 
   {
    int i=1;
    while (L.head!=NULL)
      {    
        printf("Name %s\t%s\t%d",L.contact->name ,L.contact->phone_numb,i);
        L.head=L.head->next;
      }
   }
}



int main ()

{
  list L=NULL;
  a=create();
  b=create();
  add_contact ( a,  &L);
  affichage ( L)
  add_contact ( b,  &L);
  affichage (L);
  
}
   


    
        
   
  
  
   
