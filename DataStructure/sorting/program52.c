#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(int heap[], int* n, int value) {
    heap[*n] = value;
    int i = *n;
    (*n)++;

    while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(int heap[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the heap: ");
    scanf("%d", &n);

    int heap[100]; // assume max size is 100
    for (int i = 0; i < n; i++) {
        printf("Enter the %d index value of the heap: ", i);
        scanf("%d", &heap[i]);
    }
    printf("Original Heap: ");
    printHeap(heap, n);

    int value = 20;
    insert(heap, &n, value);

    printf("Heap after inserting 20: ");
    printHeap(heap, n);

    return 0;
}
