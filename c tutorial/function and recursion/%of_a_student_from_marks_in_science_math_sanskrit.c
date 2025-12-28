#include<stdio.h>
int calcpercentage(int science,int math,int sanskrit);
int main(){
   int science,math,sanskrit;
    printf("enter a marks:");
    scanf("%d%d%d",&science,&math,&sanskrit);
    calcpercentage(science,math,sanskrit);

}
 int calcpercentage(int science,int math,int sanskrit){
   int percentage=((science+math+sanskrit)/3);
 printf("percentage is :%d",percentage);
 return 0;
 }