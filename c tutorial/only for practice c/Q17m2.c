#include<stdio.h>

int main()
{
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("the num of digit is %d",count);
    return 0;
}