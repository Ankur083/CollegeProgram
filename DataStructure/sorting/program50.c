#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the heap: ");
    scanf("%d", &n);

    int heap[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d index value of the heap: ", i);
        scanf("%d", &heap[i]);
    }
    int leafNodes = 0;
    int nonLeafNodes = 0;

    for (int i = 0; i < n; i++) {
        if (2 * i + 1 >= n && 2 * i + 2 >= n) {
            leafNodes++;
        } else {
            nonLeafNodes++;
        }
    }
    printf("Number of leaf nodes: %d\n", leafNodes);
    printf("Number of non-leaf nodes: %d\n", nonLeafNodes);

    return 0;
}
