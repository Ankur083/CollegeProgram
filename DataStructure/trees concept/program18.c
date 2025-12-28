#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createBinaryTree() { 
    int x;
    printf("\nEnter the data : "); 
    scanf("%d", &x);

    struct node *root = (struct node*) malloc(sizeof(struct node)); 
    root->data = x;
    root->left = NULL;
    root->right = NULL;

    int choice;
    printf("\nWant to insert the left child of %d (1/0): ", root->data); 
    scanf("%d", &choice);
    if(choice == 1) 
        root->left = createBinaryTree();
    
    printf("\nWant to insert the right child of %d (1/0): ", root->data); 
    scanf("%d", &choice);
    if(choice == 1) 
        root->right = createBinaryTree();   

    return root;
}

void preOrder(struct node* t) {
    if(t) {
        printf("%d  ", t->data);
        preOrder(t->left);
        preOrder(t->right);
    }
}

void inOrder(struct node* t) {
    if(t) {
        inOrder(t->left);
        printf("%d  ", t->data);
        inOrder(t->right);
    }
}

void postOrder(struct node* t) {
    if(t) {
        postOrder(t->left);
        postOrder(t->right);
        printf("%d  ", t->data);
    }
}

int main() {    
    struct node* root = NULL;
    root = createBinaryTree();

    printf("\nPre Order Traversal: ");
    preOrder(root);

    printf("\nIn Order Traversal: ");
    inOrder(root);
    
    printf("\nPost Order Traversal: ");
    postOrder(root);

    return 0;
}
