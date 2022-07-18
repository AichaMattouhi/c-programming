#include<stdio.h>
#include"strlen.day4.c"


char * al_strcat( char * dest, const char * source )

{
  int a=al_strlen(dest);
  int b=al_strlen(source);
  int i=0;
  for(i=0; i<b ;i++)
  {
    dest[a+i]=source[i];
    
    
  }
  
  return dest;
}


