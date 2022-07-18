#include<stdio.h>



struct str 

{
  int num;
  char * string ;
  
}
typedef struct str str ;




void swap (str*  str_1,str* str_2)
{
  int a;
  char * s;
  s=(char*)malloc(char);
  a=str_1->num ;
  str_1->num=str_2->num;
  str_2->num=a;
  strcpy(s, str_1->string);
  strcpy(str_1->string, str_2->string);
  strcpy(str_2->string, s);
  
  return;
 
 }
 
 
 int main ()
 
 {
 
   str str1,str2 ;
   str1={5, "CLEAR"};
   str2={6, "CRYSTAL"};
   swap(&str1,&str2);
   printf("s\n%", str1->string)
   
 }
   
 
   
  

  
