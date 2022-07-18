#include <stdio.h>
#include <string.h>
#include<stdlib.h>


void * memsett (void *ptr , int value, int taille)


{ 
 
  //check if the length of elments to modify is less tha the total length
  char *c=(char*)malloc(sizeof(char));
  char *p=(char*)ptr;
  sprintf(c,"%d",value);
  
  for(int i=0;i<taille;i++)
  
  {   
    p[i]=*c;
    
    
  }
   
 return p;  
}
    














int main ()
{ char*p;
  char str[] = "almost every programmer should know memset!";
  p=memsett (str,0,4);
  printf("%s",p);
  return 0;
}
