#include <stdio.h>
#include <stdbool.h>

int main()
{
  int   i =  8;
	int   j =  5;
	float x =  0.005f;
	float y = -0.01f;
	char  c = 'c';
	char  d = 'd';
    bool t=i <= j;
    printf("%d",(3*i - 2*j)%(2*d - c));
    printf("%d",2*((i/5) + (4*(j-3))%(i + j - 2)));
    printf("%s\n", t? "true" :"false");
    t=j != 6;
    printf("%s\n", t? "true" :"false");
    t=c == 99;
    printf("%s\n", t? "true" :"false");
    t=5*(i + j) > 'c';
    printf("%s\n", t? "true" :"false");
    t=(i > 0) && (j < 5);
    printf("%s\n", t? "true" :"false");
    t=(i > 0) || (j < 5);
    printf("%s\n", t? "true" :"false");
    t=(x > y) && (i > 0) || (j < 5);
    printf("%s\n", t? "true" :"false");
    t=(x > y) && (i > 0) && (j < 5);
    printf("%s\n", t? "true" :"false");
}
