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

int countLeaf(struct node* t) {
    if(t == NULL) 
        return 0;
    if(t->left == NULL && t->right == NULL)
        return 1;
    return countLeaf(t->left) + countLeaf(t->right);
}

int countNonLeaf(struct node* t) {
    if(t == NULL)
        return 0;
    if(t->left == NULL && t->right == NULL)
        return 0;
    return 1 + countNonLeaf(t->left) + countNonLeaf(t->right);
}

int main() {
    struct node* root = createTree();

    printf("\nTotal number of leaf nodes in the tree is : ");
    printf("%d", countLeaf(root));
    
    printf("\nTotal number of non-leaf nodes in the tree is : ");
    printf("%d", countNonLeaf(root));
    
    return 0;
}
