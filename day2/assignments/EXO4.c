
#include<stdio.h>

int main ()
 
 {
   int a;
   int b;
   int c;
   
   a=16 ;
   b=2 ;
   c= 10;
   
   c += a > 0 && a <= 15 ? ++a : a/b ;
   printf("%d", c);
    return 0;
  }
  
 
