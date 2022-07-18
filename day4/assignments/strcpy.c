#include<stdio.h>
#include"strlen.day4.c"

void al_strcpy( char *  dest, const char * source )

{
  int a =al_strlen(dest);
  
  for (int i=0;i<a ;i++)
  {
    dest[i]=source[i];
    
  }
}



