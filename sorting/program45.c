#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void sorting(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int bucketCount = max / 10 + 1;
    int buckets[bucketCount][n];
    int bucketSize[bucketCount];

    for (int i = 0; i < bucketCount; i++) {
        bucketSize[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int bucketIndex = arr[i] / 10;
        buckets[bucketIndex][bucketSize[bucketIndex]++] = arr[i];
    }
    printf("\nSorted array is: ");
    for (int i = 0; i < bucketCount; i++) {
        if (bucketSize[i] > 0) {
            insertionSort(buckets[i], bucketSize[i]);
            for (int j = 0; j < bucketSize[i]; j++) {
                printf("%d ", buckets[i][j]);
            }
        }
    }
}

int main() {
    printf("\nBucket sort\n");
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
