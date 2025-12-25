#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* create() {
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
        root->left = create();
    
    printf("\nWant to insert the right child of %d (1/0): ", root->data);
    scanf("%d", &choice);
    if(choice == 1) 
        root->right = create();

    return root;
}

void doubleOrder(struct node* t) {
    if(t != NULL) {
        printf("%d ", t->data);
        doubleOrder(t->left);
        printf("%d ", t->data);
        doubleOrder(t->right);
    }
}

void tripleOrder(struct node* t) {
    if(t != NULL) {
        printf("%d ", t->data);
        tripleOrder(t->left);
        printf("%d ", t->data);
        tripleOrder(t->right);
        printf("%d ", t->data);
    }
}

int main() {
    struct node* root = create();
    
    printf("\nDouble Order traversal is : ");
    doubleOrder(root);

    printf("\nTriple Order traversal is : ");
    tripleOrder(root);

    return 0;
}
