// String to integer-
#include<stdio.h>
#include<string.h>

int stringToNum(char *num_str) {
    int num = 0, sign = 0;
    if(num_str[0] == '-')
        sign = 1;
    for(int i = sign; i<strlen(num_str); i++) {
        num = num * 10 + (num_str[i] - '0');
    }
    if(sign)
        return -num;
    return num;
}
int main() {
    char num_str[100] = "-198";

    // printf("\nEnte a number : ");
    // scanf(" %s", num_str);
    printf("\nString number is : %s", num_str);

    printf("\nconverted integer number is : %d", stringToNum(num_str));

    return 0;
}