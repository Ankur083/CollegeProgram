// Write a program that determine the use of string function
#include<stdio.h>
#include<string.h>

int main(){

char str1[20]="Ankur";
char str2[]="Raj";

// strlen is use for find the length of string
printf("\nThe length of string is : %d",strlen(str1));
printf("\nThe length of string is : %d",strlen(str2));

// strcat() function :- concatenate the two strings
strcat(str1, str2);            // conctenate both the string in the first string
 printf("\nthe concatenated string is : %s", str1);
 printf("\nlength of concatenated string is : %d", strlen(str1));

// strcmp() function :- Compares two strings, retuen zero, if both string are same, and non-zero if not...
char str3[] = "hello";
char str4[] = "Hello";

printf("\nstrcmp(str3, str4) : %d", strcmp(str3, str4));

// strcpy() function :- copies one string into the another string
printf("\nstr1 before copying the content from str2 : %s", str1);    
strcpy(str1, str2);
printf("\nstr1 after copying the content from str2 : %s", str1);

return 0;
}


