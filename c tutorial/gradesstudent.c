#include<stdio.h>

int main(){
    int marks;
    printf("enter a marks :");
    scanf("%d",& marks);
    if(marks < 30 ){
        printf("gradeC");
    }else if ( 30 <= marks  && marks < 70){
        printf("grade B");
    }else if (70 <= marks && marks < 90) {
        printf(" grade A");
    }else if (90 <= marks && marks<= 100){
        printf("grade A+");
    }else {
        printf("fail");
    }
    return 0;
    }
