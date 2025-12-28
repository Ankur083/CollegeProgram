// Write a program to find the number of vowels ,consonants,digits,and white spaces
#include<stdio.h>
#include<string.h>

int main(){
  char str[100]= "My name is ANkur raj 22 years old";
  int vowels=0;
  int consonants=0;
  int digits=0;
  int whitespaces=0;
  
  for(int i=0;i<strlen(str);i++){
    if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
        if((str[i]=='A')||(str[i]=='a')||(str[i]=='E')||(str[i]=='e')||(str[i]=='I')
           ||(str[i]=='i')||(str[i]=='O')||(str[i]=='o')||(str[i]=='U')||(str[i]=='u')){
            vowels++;
        }
        else{
           consonants++;
        }
    }
    else if((str[i]>=48)&&(str[i])<=57){
        digits++;
        }
    else if(str[i]==' '){
            whitespaces++;
        }
    }

printf("\nNumber of vowels:%d ",vowels);
printf("\nNumber of consonants:%d ",consonants);
printf("\nNumber of digits:%d ",digits);
printf("\nNumber of whitespaces:%d ",whitespaces);
return 0;
}