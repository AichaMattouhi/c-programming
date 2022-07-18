
#include<stdio.h>
#include<stdlib.h>


void str_reverse(char* x)
{
    int i;
    int j = 0;
    while(x[j] != '\0') 
    
     j++;
    for(i = 0; i < j/2; i++)
    {
        char z = x[i];
        x[i] = x[j-i-1];
        x[j-i-1] = z;
    }
}
