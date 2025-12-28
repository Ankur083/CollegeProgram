#include<stdio.h>

int main()
 {
    int n,t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("enter a num:");5
    scanf("%d",&n);
    printf("Fibonacci Series : %d,%d,",t1,t2);
    for(int i=3;i<=n;++i){
        printf("%d,",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
 }      