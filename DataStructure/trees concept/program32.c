#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {
    struct node* nn = (struct node*) malloc(sizeof(struct node));
    nn->data = data;
    nn->left = nn->right = NULL;
    return nn;
}

struct node* insert(struct node* root, int data) {
    if(root == NULL)
        return createNode(data);

    if(data < root->data)
        root->left = insert(root->left, data);
    else if(data > root->data)
        root->right = insert(root->right, data);

    return root;
}

int countNodes(struct node* root) {
    if(root == NULL)
        return 0;
    return (1 + countNodes(root->left) + countNodes(root->right));
}

int isComplete(struct node* root, int index, int nodeCount) {
    if(root == NULL)
        return 1;

    if(index >= nodeCount)
        return 0;

    return (isComplete(root->left, 2 * index + 1, nodeCount) && 
            isComplete(root->right, 2 * index + 2, nodeCount));
}

int main() {
    struct node* root = NULL;
    int n, val;

    printf("Enter the number of nodes to insert in BST: ");
    scanf("%d", &n);

    printf("Enter the node values: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    int nodeCount = countNodes(root);
    int result = isComplete(root, 0, nodeCount);

    if(result)
        printf("\nThe tree is a Complete Binary Tree.\n");
    else
        printf("\nThe tree is NOT a Complete Binary Tree.\n");

    return 0;
}