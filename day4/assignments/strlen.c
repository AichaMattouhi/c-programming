#include<stdio.h>




int al_strlen (const char * str)

{
  int i=0;
  while ( str[i]!='\0' )
   i++;
  return i;
  
}


int main ()
{
  int a;
  const char * t="aicha";
  a=al_strlen(t);
  printf("%d" ,a);
  
  
}
