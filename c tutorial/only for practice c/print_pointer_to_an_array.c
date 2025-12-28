#include<stdio.h>
int main(){
    int a[5];
    int *p=a;

    printf("enter a 5 element:\n");
    for(int i=0; i<5; i++){
       scanf("%d", (p+i));
    }
    for(int i=0;i<5;i++){
       printf("%d",*(p+i));
    }  
      return 0;
} 
