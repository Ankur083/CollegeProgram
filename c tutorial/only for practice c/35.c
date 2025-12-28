#include<stdio.h>
#include<string.h>
void reverse(char s[]);

int main(){
char s[10];
printf("enter a string:");
scanf("%s",s);
reverse(s);
printf("reverse string is %s",s);
}  

void reverse(char s[]){
char c;
int i,j;
j=strlen(s)-1;
for(i=0;i<j;i++,j--){
c=s[i];
s[i]=s[j];
s[j]=c;
}
}
