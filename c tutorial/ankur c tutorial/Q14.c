#include<stdio.h>

int main()
{
    int x,y=0;
    printf("enter a number :");
    scanf("%d",&x);
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
             y=1;
            break;
        }

    }
    if(y==1)
    printf("number is not prime");
    else
     printf("number is prime");
    
    return 0;
}