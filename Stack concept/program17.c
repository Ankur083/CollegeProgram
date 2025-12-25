#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int num) {
    stack[++top] = num;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char postfix[]) {
    int i = 0;
    int operand1, operand2, result;
    char ch;
    while(postfix[i] != '\0') {
        ch = postfix[i];
        if(isdigit(ch)) {
            push(ch - '0');
        }
        else {
            operand2 = pop();
            operand1 = pop();
            switch(ch) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
                case '%': result = operand1 % operand2; break;
            }
            push(result);
        }
        i++;
    }
    return pop();
}

int main() {
    char postfix[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}
