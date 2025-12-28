#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=5,y=10;
    // before swapping number
    printf("Before swapping: x=%d,y=%d\n",x,y);
    swap(&x,&y);
    // After swapping number
    printf("After swapping:x=%d,y=%d\n",x,y);
    return 0;
}
