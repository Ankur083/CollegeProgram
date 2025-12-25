#include <stdio.h>

void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    printf("\nBubble sort\n");
    int n;
    printf("\nEnter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d index value of the array: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    sorting(arr, n);

    return 0;
}
