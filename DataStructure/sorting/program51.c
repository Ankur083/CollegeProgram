#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int heap[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }
    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        max_heapify(heap, n, largest);
    }
}

void deleteMax(int heap[], int* n) {
    if (*n <= 0) {
        printf("Heap is empty.\n");
        return;
    }
    printf("Deleted maximum element: %d\n", heap[0]);
    heap[0] = heap[*n - 1];
    (*n)--;
    max_heapify(heap, *n, 0);
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

    int heap[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d index value of the heap: ", i);
        scanf("%d", &heap[i]);
    }
    printf("Original Heap: ");
    printHeap(heap, n);

    deleteMax(heap, &n);

    printf("Heap after deleting maximum: ");
    printHeap(heap, n);

    return 0;
}
