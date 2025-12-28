#include <stdio.h>
#include <stdlib.h>

// Structure to represent a tree node
typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
} TreeNode;

// Function declarations
void A(TreeNode *node); // Postorder: Left, Right, Root
void B(TreeNode *node); // Preorder: Root, Left, Right
void C(TreeNode *node); // Inorder: Left, Root, Right

// Function A: Postorder (Left, Right, Root)
void A(TreeNode *node) {
    if (node == NULL)
        return;
    A(node->left);
    A(node->right);
    printf("%d ", node->val);
}

// Function B: Preorder (Root, Left, Right)
void B(TreeNode *node) {
    if (node == NULL)
        return;
    printf("%d ", node->val);
    C(node->left);
    C(node->right);
}

// Function C: Inorder (Left, Root, Right)
void C(TreeNode *node) {
    if (node == NULL)
        return;
    A(node->left);
    printf("%d ", node->val);
    A(node->right);
}

// Function to create a new tree node
TreeNode* createNode(int val) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

// Function to construct the binary tree based on the given traversal orders
TreeNode* constructTree() {
    // Constructing the tree manually as per the reconstructed structure
    TreeNode *root = createNode(1);
    root->left = createNode(2);
    root->left->right = createNode(3);
    root->left->right->right = createNode(4);
    
    return root;
}

int main() {
    // Construct the binary tree
    TreeNode *root = constructTree();

    // Calling function B (Preorder) with root as the argument
    B(root);
    
    return 0;
}
