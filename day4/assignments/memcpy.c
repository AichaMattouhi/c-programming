#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void * memecpy(void* dest,const void* src,int n)

{
  char*desti=(char*)dest;
  char*srce=(char*)src;
  for(int i=0;i<n;i++)
  {
     desti[i]=srce[i];
     
   }
   return desti;
   
   
   }  
  
  
  
  
int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memecpy(dest, src, strlen(src)+1);
   printf("After memecpy dest = %s\n", dest);
   
   return(0);
}
