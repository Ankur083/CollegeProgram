// program to check given string is palindrom or not...

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("\nEnter a string to check palindrom : ");
    scanf(" %s", str);

    int flag = 1, i=0, j=strlen(str)-1;
    
    printf("%s", str);

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++; j--;
    }

    if(flag == 1)
        printf("\n%s is a palindrom string", str);
    else
        printf("\n%s is not a palindrom string", str);

    return 0;
}

