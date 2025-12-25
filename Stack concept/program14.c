#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    int priority;
    struct node *next;
};

struct node *top = NULL;

void push() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to push: ");
    scanf("%d", &newnode->data);
    printf("Enter its priority: ");
    scanf("%d", &newnode->priority);
    newnode->next = NULL;

    if(top == NULL || newnode->priority > top->priority) {
        newnode->next = top;
        top = newnode;
    }
    else {
        struct node *temp = top;
        while(temp->next != NULL && temp->next->priority >= newnode->priority) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    printf("Popped element: %d with priority %d\n", temp->data, temp->priority);
    top = top->next;
    free(temp);
}

void display() {
    if(top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = top;
    printf("Stack elements are:\n");
    while(temp != NULL) {
        printf("Value: %d  Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main() {
    push();
    push();
    push();
    push();
    printf("\nStack after pushing elements:\n");
    display();

    pop();
    pop();
    printf("\nStack after popping elements:\n");
    display();

    return 0;
}
