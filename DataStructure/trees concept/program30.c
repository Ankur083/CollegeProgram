#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val) {
    struct node* root = (struct node*) malloc(sizeof(struct node));
    root->data = val;
    root->left = root->right = NULL;
    return root;
}

struct node* insert(struct node* root, int val) {
    if(root == NULL)
        return createNode(val);
    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

struct node* minValueNode(struct node* root) {
    struct node* temp = root;
    while(temp && temp->left != NULL)
        temp = temp->left;
    return temp;
}

struct node* deleteNode(struct node* root, int key) {
    if(root == NULL)
        return root;
    if(key < root->data)
        root->left = deleteNode(root->left, key);
    else if(key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if(root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(struct node* root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if(root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if(root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = NULL;
    int n, val, key;
    
    printf("Enter number of nodes to insert: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value to insert: ");
        scanf("%d", &val);
        root = insert(root, val);
    }

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\n\nEnter value to delete: ");
    scanf("%d", &key);

    root = deleteNode(root, key);

    printf("\nInorder Traversal after deletion: ");
    inorder(root);

    return 0;
}
