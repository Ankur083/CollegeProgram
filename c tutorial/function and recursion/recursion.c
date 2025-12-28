#include<stdio.h>
void printankur(int count);

int main(){
  printankur(5);
    return 0;
}

// recursive function
void printankur(int count){
    if (count==0){
        return;
    }
    printf("hello world\n");
    printankur(count-1);
}