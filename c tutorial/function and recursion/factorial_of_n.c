#include<stdio.h>
int factorial(int n);

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    int factorial1=factorial(n-1)*n;
    return factorial1;
}