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

int countFullNodes(struct node* t) {
    if(t == NULL)
        return 0;
    
    if(t->left == NULL && t->right == NULL)     
        return 0;
        
    return ((t->left && t->right) ? 1 : 0) + countFullNodes(t->left) + countFullNodes(t->right);
}

int main(){
    struct node* root = createTree();

    printf("\nTotal number of Full Nodes in the tree is : ");
    printf("%d", countFullNodes(root));

    return 0;
}