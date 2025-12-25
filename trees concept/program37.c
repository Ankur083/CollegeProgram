#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node {
    char data;           
    struct Node *left,
                *right;
} Node;

Node* newNode(char data) {
    Node *n = malloc(sizeof(Node));
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

Node* parse(const char *s, int *i) {
    
    while (s[*i] == ' ') (*i)++;

    if (s[*i] == '(') {
        (*i)++;            
        Node *L = parse(s, i);
     
        while (s[*i] == ' ' || s[*i] == ',') (*i)++;
        Node *R = parse(s, i);
   
        while (s[*i] && (s[*i] == ' ' || s[*i] == ')')) {
            if (s[*i] == ')') { (*i)++; break; }
            (*i)++;
        }
        Node *root = newNode('o');
        root->left  = L;
        root->right = R;
        return root;
    }

    if (isalnum((unsigned char)s[*i])) {
        char c = s[*i];
        (*i)++;
        return newNode(c);
    }

    return NULL;  
}
void inorder(Node *r) {
    if (!r) return;
    inorder(r->left);
    printf("%c ", r->data);
    inorder(r->right);
}
void draw(Node *r, int depth) {
    if (!r) return;
    draw(r->right, depth+1);
    for (int k = 0; k < depth; k++) putchar("    "[0]);  
    printf("%c\n", r->data);
    draw(r->left, depth+1);
}
int main() {
    char buf[256];
    printf("Enter tree in ((A,B),C) style: ");
    if (!fgets(buf, sizeof buf, stdin)) return 0;

    int idx = 0;
    Node *root = parse(buf, &idx);

    printf("\nIn-order traversal: ");
    inorder(root);
    printf("\n\nTree visualization:\n\n");
    draw(root, 0);

    return 0;
}
