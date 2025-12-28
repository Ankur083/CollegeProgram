#include<stdio.h>
int digitsum(int n);

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("digit of sum is %d",digitsum(n));
    return 0;
}
   int digitsum(int n){
    int sum=0;
    for(;n>0;n=n/10)
        {
          sum=sum+(n%10);
         }    
    return sum;
}