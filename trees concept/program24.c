#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode() {
    struct node* root = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &root->data);
    root->left = root->right = NULL;
    return root;
}

struct node* createTree() {
    struct node* root = createNode();
    int choice;
    printf("\nWant to insert the left child of %d : ", root->data);
    scanf("%d", &choice);
    if(choice == 1)
        root->left = createTree();
    
    printf("\nWant to insert the right child of %d : ", root->data);
    scanf("%d", &choice);
    if(choice == 1)
        root->right = createTree();
    
    return root;
}

int totalNodes(struct node* t) {
    if(t == NULL) 
        return 0;
    
    return 1 + totalNodes(t->left) + totalNodes(t->right);
}

int main() {
    struct node* root = createTree();

    printf("\nTotal number of nodes in the tree is : ");
    printf("%d", totalNodes(root));

    return 0;
}
