#include<stdio.h>

int main(){
  int num,y=0;
  printf("enter a number:") ;
  scanf("%d",&num);
  for(int i=2;i<=num/2;i++)
  {
    if(num%i==0)
    {
       y=1;
       break;   
    }
  }
    if(y==1)
    {
      printf("the number is not prime");
    }
    else
    {
      printf("the number is prime");
    }
  return 0;
}