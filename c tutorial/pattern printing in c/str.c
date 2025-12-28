#include<stdio.h>
int main(){
    int nc;
    // for(nc=0;getchar()!='\n';++nc);
    for(nc=0;getchar()!='$';++nc);
    printf("\n%d",nc);
}

