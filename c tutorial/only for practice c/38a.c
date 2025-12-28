#include<stdio.h>
#include<string.h>
void reverse (char* s) {
    int i=0, j = strlen(s)-1;
    while (i < j) {
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++, j--;
    }
}
void numberToString(int num, char* s) {
char *start = s;    // keep the reference of the starting point of the string
    int sign = 0;
    if(num < 0) {
        sign = 1;
        num = -num;
    }
    while(num) {
        *s++ = num % 10 + '0';
        num /= 10;
    }
    if(sign)
        *s++ = '-';
    *s = '\0';
    s = start;   // s is again to the start of the string
    reverse(s);
}
int main() {
    int num = -198;
    printf("\nInteger number is : %d", num);
    char str[10];
    numberToString(num, str);
    printf("\nConverted string is : %s", str);
    return 0;
}
