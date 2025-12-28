#include<stdio.h>
#include<string.h>
int main(){

    char weather[100]="raining";
    int temp;
    temp=strcmp(weather,"raining");
    if (temp==0){
        printf("taken a umbrella");
    
    }
    else {
        printf("dont take umbrella");
    }
    return 0;
}