#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void A(struct node* t);
void B(struct node* t);

struct node* createNode() {
    struct node* root = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d", &root->data);
    root->left = NULL;
    root->right = NULL;
    return root;
}

struct node* createTree() {
    struct node* root = createNode();

    int choice;
    printf("\nWant to insert the left child of %d (1/0): ", root->data);
    scanf("%d", &choice);
    if (choice == 1)
        root->left = createTree();
    
    printf("\nWant to insert the right child of %d (1/0): ", root->data);
    scanf("%d", &choice);
    if (choice == 1)
        root->right = createTree();
    
    return root;
}

void A(struct node* t) {
    if (t) {
        printf("%d  ", t->data);
        B(t->left);
        B(t->right);
    }
}

void B(struct node* t) {
    if (t) {
        A(t->left);
        A(t->right);
        printf("%d  ", t->data);
    }
}

int main() {
    struct node* root = createTree();
    printf("\nIndirect recursion on the binary tree is (starting from A): ");
    A(root);
    return 0;
}
