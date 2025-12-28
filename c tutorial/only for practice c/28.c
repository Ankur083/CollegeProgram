#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int index;
    printf(" index are you choose :");
    scanf("%d",&index);

    if(index<0||index>5)
       printf("invalid index enter");
       
       for(int i=index;i<=4;i++){
           a[i]=a[i+1];
       }
       printf("Resultant array:\n");
       for(int i=0;i<=3;i++){
           printf("%d",a[i]);
       }
       return 0;
}