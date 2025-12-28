#include<stdio.h>
typedef struct{
    float real;
    float imag;
}complex;
complex add(complex c1,complex c2){
    complex result;
result.real=c1.real+c2.real;
result.imag=c1.imag+c2.imag;
return result;
}
complex subtract(complex c1,complex c2){
    complex result;
result.real=c1.real-c2.real;
result.imag=c1.imag-c2.imag;
return result;
}
int main(){
    complex c1,c2, result;
    printf("enter first complex number(real and imaginary):")
    scanf("%f,%f,&c1.real,&c2.imag")

}