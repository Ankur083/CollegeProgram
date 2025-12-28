#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;  
    struct Node* left;  
    struct Node* right; 
};

struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

struct Node* findLeftChild(struct Node* root, int k) {
    if (root == NULL || k < 0)
        return NULL;


    struct Node* queue[100];
    int front = 0, rear = 0;
    
    queue[rear++] = root;
    int index = 0;

    while (front < rear) {
        struct Node* current = queue[front++];

        if (index == k) {
            return current->left; 
        }

        if (current->left != NULL) {
            queue[rear++] = current->left;
        }

        if (current->right != NULL) {
            queue[rear++] = current->right;
        }

        index++;
    }

    return NULL;
}

void preorder(struct Node* root) {
    if (root == NULL) return;
    printf("%c ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Create a tree using the leftmost child-right sibling representation
    // Example tree:
    //        A
    //       / \
    //      B   C
    //     / \    \
    //    D   E    F
    struct Node* root = newNode('A');
    root->left = newNode('B');
    root->left->left = newNode('D');
    root->left->right = newNode('E');
    root->right = newNode('C');
    root->right->right = newNode('F');

    printf("Preorder Traversal of Tree: ");
    preorder(root);
    printf("\n");

    int k;
    printf("Enter the index (0-based) of the node to find the left child: ");
    scanf("%d", &k);

    struct Node* leftChild = findLeftChild(root, k);

    if (leftChild != NULL) {
        printf("The leftmost child of node at index %d is: %c\n", k, leftChild->data);
    } else {
        printf("Node at index %d does not have a leftmost child.\n", k);
    }

    return 0;
}
