#include<stdio.h>

int main()
{
    int number ;
    printf("enter a number:");
    scanf("%d",&number);
    printf("Table of %d\n",number);
    for(int i=10;i>0;i--){
         int n=number;
        
        n=n*i;
        printf("%d\n",n);
    }
    return 0;
}