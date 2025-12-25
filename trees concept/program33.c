#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
    int height;
};

struct node* createNode(int data) {
    struct node* nn = (struct node*) malloc(sizeof(struct node));
    nn->data = data;
    nn->left = nn->right = NULL;
    nn->height = 1;
    return nn;
}
int height(struct node* t) {
    if(t == NULL)
        return 0;
    return t->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

struct node* rightRotate(struct node* y) {
    struct node* x = y->left;
    struct node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

struct node* leftRotate(struct node* x) {
    struct node* y = x->right;
    struct node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

int getBalance(struct node* t) {
    if(t == NULL)
        return 0;
    return height(t->left) - height(t->right);
}

struct node* insert(struct node* t, int key) {
    if(t == NULL)
        return createNode(key);

    if(key < t->data)
        t->left = insert(t->left, key);
    else if(key > t->data)
        t->right = insert(t->right, key);
    else
        return t;

    t->height = 1 + max(height(t->left), height(t->right));

    int balance = getBalance(t);

    
    if(balance > 1 && key < t->left->data)
        return rightRotate(t);

    
    if(balance < -1 && key > t->right->data)
        return leftRotate(t);


    if(balance > 1 && key > t->left->data) {
        t->left = leftRotate(t->left);
        return rightRotate(t);
    }

    if(balance < -1 && key < t->right->data) {
        t->right = rightRotate(t->right);
        return leftRotate(t);
    }

    return t;
}
void postorder(struct node* t) {
    if(t == NULL)
        return;
    postorder(t->left);
    printf("%d ", t->data);
    postorder(t->right);
 
}


// void postorder(struct node* t) {
//     if(t == NULL)
//         return;
//     postorder(t->left);
//     postorder(t->right);
//     printf("%d ", t->data);
// }

int main() {
    struct node* root = NULL;
    int n, val;

    printf("Enter the number of nodes to insert into AVL Tree: ");
    scanf("%d", &n);

    printf("Enter the node values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    printf("\nPostorder traversal of AVL Tree: ");
    postorder(root);

    return 0;
}