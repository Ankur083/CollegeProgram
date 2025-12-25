#include <stdio.h>

int minNodes(int h, int diff) {    
    if (h < 0)
        return 0;
    if (h == 0)
        return 1;
    return 1 + minNodes(h - 1, diff) + minNodes(h - 1, diff) - diff;   
}

int main() {
    int height;
    printf("Enter the height of the Size Balanced BST: ");
    scanf("%d", &height);

    int diff;
    printf("\nEnter atmost diff bw the nu. of nodes in left and right subtree : "); 
    scanf("%d", &diff);

    int min_nodes = minNodes(height, diff);
    printf("Minimum number of nodes required: %d\n", min_nodes);

    return 0;

}
