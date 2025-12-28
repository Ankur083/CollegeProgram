#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to enqueue: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(front == NULL) { 
        front = rear = newnode;
        rear->next = front;
    }
    else {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct node *temp = front;
    if(front == rear) { 
        printf("Dequeued element: %d\n", temp->data);
        front = rear = NULL;
    }
    else {
        printf("Dequeued element: %d\n", temp->data);
        front = front->next;
        rear->next = front;
    }
    free(temp);
}

void display() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = front;
    printf("Queue elements are: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    while(temp != front);
    printf("\n");
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    printf("\nQueue after enqueue operations:\n");
    display();

    dequeue();
    dequeue();
    printf("\nQueue after dequeue operations:\n");
    display();

    return 0;
}
