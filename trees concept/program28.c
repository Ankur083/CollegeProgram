#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

int search(int inorder[], int start, int end, int value) {
    for(int i = start; i <= end; i++) {
        if(inorder[i] == value)
            return i;
    }
    return -1;
}

struct node* createNode(int val) {
    struct node* root = (struct node*) malloc(sizeof(struct node));
    root->data = val;
    root->left = root->right = NULL;
    return root;
}

struct node* buildTree(int inorder[], int postorder[], int start, int end, int* postIndex) {
    if(start > end)
        return NULL;

    int val = postorder[*postIndex];
    (*postIndex)--;

    struct node* root = createNode(val);

    if(start == end)
        return root;

    int index = search(inorder, start, end, val);

    root->right = buildTree(inorder, postorder, index + 1, end, postIndex);
    root->left = buildTree(inorder, postorder, start, index - 1, postIndex);

    return root;
}

void preorder(struct node* root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int size = sizeof(inorder) / sizeof(inorder[0]);
    int postIndex = size - 1;

    struct node* root = buildTree(inorder, postorder, 0, size - 1, &postIndex);

    printf("\nPreorder traversal of the constructed tree is : ");
    preorder(root);

    return 0;
}
