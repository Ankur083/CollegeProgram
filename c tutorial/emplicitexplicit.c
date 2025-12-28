#include<stdio.h>

int main(){
    char b='A';
    //printf("%c\n",b);

    int a = 7.5; // implicit conversion
    //printf("%d\n", a);
  
  char ch=b+a;
  printf("%c\n",ch);
  
    float d = 9;
   // printf("\n%f\n", d);

    float result=d-a;
    printf("%f\n",result);


    // explicit conversion

    float g = 5/2;
    printf("\n%f", g);

    printf("\n%d", (int) (3 + 4.5));
    printf("\n%f", 3 + 4.5);



     }