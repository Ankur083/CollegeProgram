#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to push: ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display() {
    struct node *temp = top;
    if(temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, i;

    printf("How many elements you want to push: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        push();
    }
    printf("\nStack after pushing elements:\n");
    display();

    printf("\nHow many elements you want to pop: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        pop();
    }
    printf("\nStack after popping elements:\n");
    display();

    return 0;
}
