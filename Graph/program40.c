#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

struct Queue {
    int items[MAX_VERTICES];   
    int front, rear;
};

int isEmpty(struct Queue* q) {
    return (q->front == -1);
}

void enqueue(struct Queue* q, int value) {
    if (q->rear == MAX_VERTICES - 1) {
        printf("Queue is full!\n");
    } else {
        if (q->front == -1) {
            q->front = 0; 
        }
        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(struct Queue* q) {
    int item;
    if (q->front == -1) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) { 
            q->front = q->rear = -1;
        }
        return item;
    }
}

void bfs(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int startVertex) {
    bool visited[MAX_VERTICES];
    for (int i = 0; i <= vertices; i++) {
        visited[i] = false;
    }
    
    struct Queue q;
    q.front = -1;  
    q.rear = -1;  

    visited[startVertex] = true;
    enqueue(&q, startVertex);

    printf("Breadth First Traversal starting from vertex %d: ", startVertex);

    while (isEmpty(&q) == false) {
        int currentVertex = dequeue(&q);
        printf("%d ", currentVertex);
        
        for (int i = 0; i <= vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {                 
                visited[i] = true;
                enqueue(&q, i);
            }
        }
    }
    printf("\n");
}

int main() {
    int vertices, edges, src, dest;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the edges (src dest):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &src, &dest);
        graph[src][dest] = 1;
        graph[dest][src] = 1;  
    }
    printf("Enter the starting vertex for BFS: ");
    int startVertex;
    scanf("%d", &startVertex);

    bfs(graph, vertices, startVertex);

    return 0;
}