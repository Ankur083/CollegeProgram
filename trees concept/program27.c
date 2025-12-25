#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode() {
    struct node* nn = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &nn->data);
    nn->left = nn->right = NULL;
    return nn;
}

struct node *createTree() {
    struct node* nn = createNode();
    int ans;
    printf("\nWant to insert the left child of %d : ", nn->data);
    scanf("%d", &ans);
    if(ans == 1)
        nn->left = createTree();
    
    printf("\nWant to insert the right child of %d : ", nn->data);
    scanf("%d", &ans);
    if(ans == 1)
        nn->right = createTree();
    
    return nn;
}

int heightOfTree(struct node* t) {
    if(t == NULL) 
        return 0;
    
    if(t->left == NULL && t->right == NULL)   // we assume that the height of the leaf node is 0
        return 0;
    
    int l = heightOfTree(t->left);
    int r = heightOfTree(t->right);
    if(l > r)
        return 1 + l;
    else 
        return 1 + r;
}

int main(){
    struct node* root = createTree();

    printf("Height of the given binary tree is : ");
    printf("%d",heightOfTree(root));
    return 0;
}