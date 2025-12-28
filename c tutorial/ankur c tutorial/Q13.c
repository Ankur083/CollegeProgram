#include<stdio.h>

int main()
{
    float n;
    do
    {
      printf("enter a number");
      scanf("%f",&n);
      if(n<0)
      {
        break;
      }
      else
      {
        printf("number is a positive number\n");
      }
    }
     while(1);
     printf("you are enter a negative number thank you");
     return 0;
}