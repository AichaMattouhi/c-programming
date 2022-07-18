#include<stdio.h>
#include<stdlib.h>

struct complex
{
    float real;
    float imaginary;
};
typedef struct complex complex;


void printComplex(complex a){
	printf("%f + %f i\n",a.real,a.imaginary);
	return;
}
complex add(complex a, complex b){
	complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}

complex sub(complex a,complex b){
	complex c;
	c.real = a.real - b.real;
	c.imaginary = a.imaginary - b.imaginary;
	return c;
}

complex mul(complex a, complex b){
	complex c;
	c.real = a.real*b.real - a.imaginary*b.imaginary;
	c.imaginary = a.imaginary*b.real + a.real*b.imaginary;
	return c;
}

complex div1(complex a, complex b){
	if(b.real == 0 && b.imaginary == 0){
		printf("division by zero\n");
		complex c = {0,0};
		return c;
	}
	complex c;
	c.real = (a.real*b.real + a.imaginary*b.imaginary)/(b.real*b.real+b.imaginary*b.imaginary);
	c.imaginary = (a.imaginary*b.real-a.real*b.imaginary)/(b.real*b.real+b.imaginary*b.imaginary);
	return c;
}

