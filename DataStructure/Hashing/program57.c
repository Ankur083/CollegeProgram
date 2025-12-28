#include <stdio.h>

int main() {
    int size = 10;
    int table[10];
    for (int i = 0; i < size; i++) {
        table[i] = -1;
    }

    int keys[] = {17, 16, 22, 36, 33, 46, 26, 144};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = key % 10;
        int j = 1;

        while (table[index] != -1) {
            index = (key + j * j) % size;
            j++;
        }

        table[index] = key;
    }

    printf("Hash Table after Quadratic Probing:\n");
    for (int i = 0; i < size; i++) {
        if (table[i] != -1)
            printf("%d -> %d\n", i, table[i]);
        else
            printf("%d -> NULL\n", i);
    }

    return 0;
}
