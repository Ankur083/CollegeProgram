#include<stdio.h>

void decimal_binary(int n){
    if(n==0)return;
    decimal_binary(n/2);
    printf("%d",n%2);
    }



int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num==0){
    printf("0");
    }
    else
        decimal_binary(num);
    printf("\n");
    return 0;
}