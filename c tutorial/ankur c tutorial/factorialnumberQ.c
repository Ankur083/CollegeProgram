# include<stdio.h>

int main()
{
    int n,factorial=1;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        factorial=factorial * i ;
    }
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}