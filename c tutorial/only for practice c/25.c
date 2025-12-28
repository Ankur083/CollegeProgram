#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int *p[5]={a,a+1,a+2,a+3,a+4};
    int **pp = p;
    ++pp;
    printf("%u\n",pp-p);
    printf("%u\n",*pp-a);
    printf("%d\n",**pp);
    printf("%d\n",++*pp);
    printf("%d\n",++**pp);
 return 0;
}