#include<stdio.h>
#include<string.h>

int main() {

    char str[] = "Computer Architecture";

    char ch;
    printf("\nEnter the character which u want to remove : ");
    scanf(" %c", &ch);
    
    int i=0; 

    while(str[i] != '\0') {
        if(str[i] == ch) {
            int j=i;
            for(j=i; j<strlen(str)-1; j++) {
                str[j] = str[j+1];
            }
            str[j] = '\0';
            continue;
        }
        i++;
    }
     printf("\nnew string is : %s", str);
     return 0;
}