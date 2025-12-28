#include<stdio.h>
#include<math.h>

int main()
{
    int num,count=0;
    printf("enter a number to check the number is armstrong number or not" );
    scanf("%d",&num);
    int i=num,v=i;
    for(count=0;num>0;count++)
    {
        num=num/10;
    }
    // printf("the digit of a number is",count);
    int sum=0,j;
for(;i>0;){
    j=i%10;
    sum=sum+pow(j,count);
    i=i/10;
}
if(sum==v)
{
    printf("the number is armstrong number");
}
else{
    printf("the number is not armstrong number");
}
return 0;
}