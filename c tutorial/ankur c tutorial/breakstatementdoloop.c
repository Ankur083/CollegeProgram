#include<stdio.h>

int main ()
    {
    int n;
    do
    {
        printf("enter a number :");
        scanf("%d",&n);
    
    if(n%2!=0)
    {
        break;
    }
    else
    {
       printf( "number is a even\n");
        
    }
    }while(1);
    printf("thank you");
    return 0;
}
