#include <stdio.h>

#define MAX_BLOCKS 100  

int memory[MAX_BLOCKS] = {0};  

void indexedAllocation(int indexBlock, int blocks[], int length) {
    if (memory[indexBlock] != 0) {
        printf("Error: Index block %d is already allocated.\n", indexBlock);
        return;
    }
    
    for (int i = 0; i < length; i++) {
        if (memory[blocks[i]] != 0) {
            printf("Error: Block %d is already allocated.\n", blocks[i]);
            return;
        }
    }

    memory[indexBlock] = 1;  

    for (int i = 0; i < length; i++)
        memory[blocks[i]] = 1;  

    printf("File allocated using Indexed Allocation.\nIndex Block: %d\nAllocated Blocks: ", indexBlock);
    for (int i = 0; i < length; i++)
        printf("%d ", blocks[i]);
    
    printf("\n");
}

int main() {
    int indexBlock, length;
    
    printf("Enter index block: ");
    scanf("%d", &indexBlock);
    
    printf("Enter number of blocks: ");
    scanf("%d", &length);
    
    int blocks[length];
    printf("Enter block numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &blocks[i]);

    indexedAllocation(indexBlock, blocks, length);

    return 0;
}