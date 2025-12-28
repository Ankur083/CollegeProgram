#include<stdio.h>

int main()
{
    int count=0,num;
    printf("enter a number");
    scanf("%d",&num);
    while(1)
    {
      num = num/10;
       count++;
       if(num==0)
        break;
       
    }
    printf("the digit of number is %d",count);
    return 0;
}