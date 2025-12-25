#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

struct Node* infixToTree(char* expression) {
    struct Node* stack[100];
    char operatorStack[100];
    int stackTop = -1, operatorTop = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (isspace(expression[i])) continue;  // Ignore spaces

        if (isalnum(expression[i])) {
            stack[++stackTop] = newNode(expression[i]);
        } else if (expression[i] == '(') {
            operatorStack[++operatorTop] = expression[i];
        } else if (expression[i] == ')') {
            while (operatorTop != -1 && operatorStack[operatorTop] != '(') {
                char op = operatorStack[operatorTop--];
                struct Node* right = stack[stackTop--];
                struct Node* left = stack[stackTop--];
                struct Node* root = newNode(op);
                root->left = left;
                root->right = right;
                stack[++stackTop] = root;
            }
            operatorTop--; // Pop '('
        } else if (isOperator(expression[i])) {
            while (operatorTop != -1 && precedence(operatorStack[operatorTop]) >= precedence(expression[i])) {
                char op = operatorStack[operatorTop--];
                struct Node* right = stack[stackTop--];
                struct Node* left = stack[stackTop--];
                struct Node* root = newNode(op);
                root->left = left;
                root->right = right;
                stack[++stackTop] = root;
            }
            operatorStack[++operatorTop] = expression[i];
        }
    }

    while (operatorTop != -1) {
        char op = operatorStack[operatorTop--];
        struct Node* right = stack[stackTop--];
        struct Node* left = stack[stackTop--];
        struct Node* root = newNode(op);
        root->left = left;
        root->right = right;
        stack[++stackTop] = root;
    }

    return stack[stackTop];
}

void postOrder(struct Node* node) {
    if (node == NULL) return;
    postOrder(node->left);
    postOrder(node->right);
    printf("%c ", node->data);
}

int main() {
    char expression[100];
    printf("Enter infix expression: ");
    fgets(expression, sizeof(expression), stdin);
    expression[strcspn(expression, "\n")] = 0;  

    struct Node* root = infixToTree(expression);

    printf("Post-order traversal of the tree: ");
    postOrder(root);
    printf("\n");

    return 0;
}
