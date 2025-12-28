#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp;

void makeNode() {
    int choice;
    while(1) {
        printf("Do you want to make a new node (0/1): ");
        scanf("%d", &choice);
        if(choice == 0) {
            return;
        } else {
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            printf("\nEnter a value of newnode: ");
            scanf("%d", &newnode->data);
            temp->next = newnode;
            newnode->next = NULL;
            temp = temp->next;
        }
    }
}

void traverse() {
    printf("The linkedlist is: ");
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


struct node* recReverse(struct node* curr) {
    if(curr == NULL || curr->next == NULL) {
        return curr;
    }
    struct node* newHead = recReverse(curr->next);
    curr->next->next = curr;
    curr->next = NULL;
    return newHead;
}

int main() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value of first node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head = newnode;
    temp = head;

    makeNode();
    traverse();

    head = recReverse(head);
    printf("After reversing:\n");
    traverse();

    return 0;
}
