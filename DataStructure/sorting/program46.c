#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    int size = high - low + 1;
    int *numbers = (int *)malloc(size * sizeof(int));
    int k = 0;

    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            numbers[k++] = arr[left++];
        } else {
            numbers[k++] = arr[right++];
        }
    }
    while (left <= mid) {
        numbers[k++] = arr[left++];
    }
    while (right <= high) {
        numbers[k++] = arr[right++];
    }
    for (int i = low; i <= high; i++) {
        arr[i] = numbers[i - low];
    }

    free(numbers);
}

void merge_sort(int arr[], int low, int high) {   
    if (low >= high) {
        return;
    }
    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    printf("\nMerge sort\n");
    int n;
    printf("\nEnter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d index value of an array: ", i);
        scanf("%d", &arr[i]);
    }
    printf("array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    merge_sort(arr, 0, n - 1); 

    printf("\nsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
