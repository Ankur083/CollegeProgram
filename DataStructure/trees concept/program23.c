#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
    char data;
    struct node* left;
    struct node* right;
};

char inorder[] = {'D', 'B', 'E', 'A', 'F', 'C', 'G'};
char preorder[] = {'A', 'B', 'D', 'E', 'C', 'F', 'G'};
int preindex = 0;

struct node* createNode(char val) {
    struct node* root = (struct node*) malloc(sizeof(struct node));
    root->data = val;
    root->left = root->right = NULL;
    return root;
}

int searchIndex(char val) {
    for(int i = 0; i < strlen(inorder); i++) {
        if(inorder[i] == val)
            return i;
    }
    return -1;
}

struct node* createTree(int l, int r) {
    if(l > r)
        return NULL;
        
    char rootVal = preorder[preindex++];
    struct node* root = createNode(rootVal);
    if(l == r)
        return root;
    
    int index = searchIndex(rootVal);
    root->left = createTree(l, index - 1);
    root->right = createTree(index + 1, r);

    return root;
}

void preOrder(struct node* root) {
    if(root) {
        printf("%c  ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node* root) {
    if(root) {
        inOrder(root->left);
        printf("%c  ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node* root) {
    if(root) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%c  ", root->data);
    }
}

int main() {
    int length = sizeof(inorder) / sizeof(inorder[0]);
    int l = 0, r = length - 1;

    struct node* root = createTree(l, r);

    printf("\nPre Order traversal of binary tree is : ");
    preOrder(root);
    printf("\nIn Order traversal of binary tree is : ");
    inOrder(root);
    printf("\nPost Order traversal of binary tree is : ");
    postOrder(root);

    return 0;
}
