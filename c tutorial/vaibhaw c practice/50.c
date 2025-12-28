#include<stdio.h>

void binary_number(int n){
    if(n==0)return;
    binary_number(n/2);
    printf("%d",n%2);
}

int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    else{
        binary_number(num);
        printf("\n");
        return 0;
        
    }
    
}