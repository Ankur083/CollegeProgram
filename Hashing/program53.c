#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node* table[], int size, int key) {
    int index = key % size;
    struct Node* newNode = createNode(key);
    if (table[index] == NULL) {
        table[index] = newNode;
    } else {
        struct Node* temp = table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(struct Node* table[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d -> ", i);
        struct Node* temp = table[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void findChainLengths(struct Node* table[], int size) {
    int min = 1000, max = 0, total = 0, chains = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        struct Node* temp = table[i];
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        if (count > 0) {
            if (count < min) min = count;
            if (count > max) max = count;
            total += count;
            chains++;
        }
    }
    float avg = (float)total / chains;
    printf("\nMinimum chain length: %d", min);
    printf("\nMaximum chain length: %d", max);
    printf("\nAverage chain length: %.2f\n", avg);
}

int main() {
    int size = 7;
    struct Node* table[size];
    for (int i = 0; i < size; i++) {
        table[i] = NULL;
    }

    int keys[] = {5, 28, 19, 15, 20, 33, 12, 17, 10};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        insert(table, size, keys[i]);
    }

    printf("Hash Table:\n");
    display(table, size);

    findChainLengths(table, size);

    return 0;
}
