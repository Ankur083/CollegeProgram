#include<stdio.h>

 void HoCo(float temp);
 
 int main(){
    float temp;
    printf("enter a value");
    scanf("%f",&temp);
    HoCo(temp);
    return 0;
 }
 void HoCo(float temp){
    if(temp<32){
        printf("cold");
    }
    else
    {
        printf("hot");
    }
    
 }
