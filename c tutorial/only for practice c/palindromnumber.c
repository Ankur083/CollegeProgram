#include<stdio.h>

int main()
{
    int num,value,a,num2=0;
    printf("enter a number:");
    scanf("%d",&num);
    
    for(value=num;num>0;num=num/10)
    {
        a=num%10;
        num2=num2*10+a;
        
    }
    if(num2==value)
    {
        printf("the number is palindrom number");
    }
    else
      {
        printf("the number is palindrom number");
      }
      return 0;
}
