#include <stdio.h>

int findLeftChild(int k) {
    return 2 * k + 1;
}

int main() {
    int tree[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(tree) / sizeof(tree[0]);

    int k;
    printf("Enter the index of the element: ");
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Invalid index. Please enter an index between 0 and %d.\n", n-1);
        return 0;
    }

    int leftChildIndex = findLeftChild(k);
    if (leftChildIndex < n) {
        printf("The left child of node at index %d (%d) is: %d\n", k, tree[k], tree[leftChildIndex]);
    } else {
        printf("The node at index %d does not have a left child.\n", k);
    }

    return 0;
}

