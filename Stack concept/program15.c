#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int val) {
    stack1[++top1] = val;
}

int pop1() {
    return stack1[top1--];
}

void push2(int val) {
    stack2[++top2] = val;
}

int pop2() {
    return stack2[top2--];
}

void enqueue() {
    int val;
    printf("Enter value to enqueue: ");
    scanf("%d", &val);
    push1(val);
}

void dequeue() {
    int i;
    if(top2 == -1) {
        if(top1 == -1) {
            printf("Queue Underflow\n");
            return;
        }
        else {
            while(top1 != -1) {
                push2(pop1());
            }
        }
    }
    printf("Dequeued element: %d\n", pop2());
}

void display() {
    int i;
    if(top2 != -1) {
        for(i = top2; i >= 0; i--) {
            printf("%d ", stack2[i]);
        }
    }
    for(i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    printf("\nQueue after enqueuing:\n");
    display();

    dequeue();
    dequeue();
    printf("\nQueue after dequeuing:\n");
    display();

    return 0;
}
