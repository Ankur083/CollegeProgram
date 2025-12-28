#include<stdio.h>
#include<math.h>


int minNodes(int h) {
    if(h == -1)
        return 0;
    if(h == 0)
        return 1;
    return 1 + minNodes(h-1) + minNodes(h-2);
}

int maxNodes(int h) {
    return (int)pow(2, h+1) - 1;
}

int main() {
    int h;

    printf("Enter the height of AVL tree: ");
    scanf("%d", &h);

    printf("\nMinimum number of nodes possible: %d\n", minNodes(h));
    printf("Maximum number of nodes possible: %d\n", maxNodes(h));

    return 0;
}
