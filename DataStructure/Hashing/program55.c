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
        int h1 = key % 10;
        int h2 = (key % 6) + 1;
        int j = 0;
        int index = (h1 + j * h2) % size;

        while (table[index] != -1) {
            j++;
            index = (h1 + j * h2) % size;
        }

        table[index] = key;
    }

    printf("Hash Table after Double Hashing:\n");
    for (int i = 0; i < size; i++) {
        if (table[i] != -1)
            printf("%d -> %d\n", i, table[i]);
        else
            printf("%d -> NULL\n", i);
    }

    return 0;
}
