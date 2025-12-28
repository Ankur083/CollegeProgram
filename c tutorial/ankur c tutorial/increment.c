#include<stdio.h>

int main(){
    
    int i=11, a, b, c, d;
    a = ++i;
    b= i++;
    c = ++i;
    d = i++;
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    printf("%d",i);
    return 0;
}