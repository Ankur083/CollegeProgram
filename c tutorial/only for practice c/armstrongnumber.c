#include<stdio.h>
#include<math.h>

int main()
{
    int num,count=0;
    printf("enter a number to check weather number are armstrong number or not");
    scanf("%d",&num);
    int i=num,v=i;
    for(;num>0;count++)
    {
        num=num/10;
    }
     int sum=0,j;
    for(;i>0;)
    {
      j=i%10;
      sum=sum+pow(j,count);
      i=i/10;
    }
    if(sum==v)
    {
        printf("the number is armstrong number");
    }
      else
      {
        printf("the number is not armstrong number");
      }
      return 0;
    
    

}