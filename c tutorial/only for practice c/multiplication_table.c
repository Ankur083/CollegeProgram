#include<stdio.h>

int main()
{
    int num;
    //take the number as an input from user
    printf("enter the value of whose multiplication table is to be printed:");
    scanf("%d",&num);
    printf("the multiplication table of %d is\n",num);
    for(int i=1;i<=10;i++)
    {
        printf(" %d X %d = %d\n",num,i,i*num);
    }
    return 0;
}