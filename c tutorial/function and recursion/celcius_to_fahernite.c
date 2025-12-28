#include<stdio.h>
float convertTemp(float celcius);

int main()
{
float celcius;

printf("enter a value:");
scanf("%f",&celcius);

  convertTemp(celcius);
    return 0;
}
float convertTemp(float celcius){
float far=celcius*9/5+32;
printf("far is %f",far);
return 0;
}
