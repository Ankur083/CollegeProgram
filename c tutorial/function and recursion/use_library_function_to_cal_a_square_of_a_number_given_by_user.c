#include<stdio.h>
#include<math.h>
void num(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    num (n);
      return 0;    
}
void num(int n){
  int p=pow(n,2);
  printf("number of square is %d",p);
}
   
   
