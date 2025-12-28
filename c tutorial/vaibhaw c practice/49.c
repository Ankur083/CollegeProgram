#include<stdio.h>

void check_evenodd(int num){
    if(num<1)return;
    check_evenodd(num-1);
    if(num %2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }

}

int main(){
    int n;
    printf("enter a range:");
    scanf("%d",&n);
    check_evenodd(n);
    return 0;
}