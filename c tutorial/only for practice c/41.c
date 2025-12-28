#include<stdio.h>

struct complex
{
    int real;
    int imag;
};

void addition(struct complex *C1, struct complex *C2) {
    printf("\nAddition is : %d + %di", C1->real + C2->real, C1->imag + C2->imag);    
}

void subtraction(struct complex *C1, struct complex *C2) {
    if(C1->imag - C2->imag < 0) 
        printf("\nSubtraction is : %d - %di", C1->real - C2->real, C2->imag - C1->imag);    

    else
        printf("\nSubtraction is : %d + %di", C1->real - C2->real, C1->imag - C2->imag);    

}

int main() {
    
    struct complex comp, comp1;

    printf("\nEnter real and imaginary part for comp1 : ");
    scanf("%d %d", &comp.real, &comp.imag);

    printf("\nEnter real and imaginary part for comp2 : ");
    scanf("%d %d", &comp1.real, &comp1.imag);

    printf("\nFirst complex number is : %d + %di", comp.real, comp.imag);
    printf("\nSecond complex number is : %d + %di", comp1.real, comp1.imag);

    addition(&comp, &comp1);
    subtraction(&comp, &comp1);
    
    return 0;
}