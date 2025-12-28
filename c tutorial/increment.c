# include<stdio.h>
int main(){
    int x=11;
     int i=++x;
    int v=x++;
    printf("%d,%d",i,x);
    printf("\n%d,%d",v,x);
    int c = ++x;
    printf("\n%d,%d",c,x);
    return 0;
}