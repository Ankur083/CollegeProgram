#include<stdio.h>

int main()
{
    int side;
    printf("enter a side");
    scanf("%d",&side);
    int volume=side*side*side;
    printf("volume is %d",volume);
    return 0;
}