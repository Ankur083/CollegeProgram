#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Define an array
    int *ptr = arr;  // Pointer to the first element of the array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    printf("Array elements using a pointer to array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));  // Access the array elements using the pointer
    }

    return 0;
}
