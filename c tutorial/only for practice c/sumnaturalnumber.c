#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
         sum=sum+i;
    }
    printf("sum of fist natural number is %d",sum);
    return 0;
}