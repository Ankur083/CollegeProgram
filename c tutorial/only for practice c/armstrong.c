#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0;
    printf("enter a number: ");
    scanf("%d",&num);
    int v=num;
    for(;num>0;){
        num=num/10;
        count=count+1;
    }
    int sum=0,m,j=v;
    for(;v>0;){
        m=v%10;
        sum=sum+pow(m,count); 
        v=v/10;
    }
    if(sum==j){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}