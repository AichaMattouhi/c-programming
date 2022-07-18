


#include<stdio.h>
#include<stdlib.h>


//recreer fonction memchr

void *memchrr(char * memory , int searchedchar, int size)
 
{  //char c[]="1234567890";
   char *c;
   unsigned i=0;
   int s=0;
   sprintf(c,"%d",searchedchar);
   while ( s < size)
   { 
     if ( *(memory+i)==*c)return memory+i;
     s+=1;
     i+=1;
   }
	printf("hello");
   return NULL;
} 
     
int main () {
   char str[] = "ht6tp://www.tutorial7spoint.com";
   int ch =6;
   char * ret;

   ret = memchrr(str, ch,5);
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

