#include<stdio.h>
int fib(int n);

int main(){
// int n;
// printf("enter a number:");
// scanf("%d",&n);
   fibonacci(6);
    return 0;

}

int fibonacci(int n){
              if(n==0){
                return 0;
              }
              if(n==1){
                return 1;
              }

int fibonacci=fibonacci(n-1)+fibonacci(n-2);
printf("fibonacci is %d",n,fibonacci);
return fibonacci;
}