#include<stdio.h>

int main()
{
    int factorial =1,n;
    printf("enter a number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
      factorial=factorial*i;
    }
    printf("factorial of %d",factorial);
    return 0;
}