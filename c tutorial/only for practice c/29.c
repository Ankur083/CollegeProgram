#include<stdio.h>

int main(){
 int a[3][3];
printf("enter a number in 2d array:");
for(int i=0;i<3;i++)
{
 for(int j=0;j<3;j++){
    scanf("%d",&a[i][j]);
 }
}
printf("The 2D array is:\n");
for(int i=0;i<3;i++)
{
 for(int j=0;j<3;j++){
  printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}