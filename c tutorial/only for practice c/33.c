// Write a program to find the frequency of a character a string 
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("\nEnter a string : ");
    scanf("\n%s", str);

    char ch;
    int freq = 0;
    printf("\nEnter the character to find frequency : ");
    scanf(" %c", &ch);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            freq++;
    }

    // for(int i=0; i<strlen(str); i++) {     // strlen function don't include the null character in the string
    //     if(str[i] == ch)
    //         freq++;
    // }

    printf("\nThe frequency of the character \'%c\' is %d.", ch, freq);

    printf("\nThe length of the string using strlen is : %d", strlen(str));

  return 0;
}