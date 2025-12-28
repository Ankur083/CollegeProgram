#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

void dfs(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int currentVertex, bool visited[MAX_VERTICES]) {
    visited[currentVertex] = true;
    printf("%d ", currentVertex);

    for (int i = 0; i <= vertices; i++) {
        if (graph[currentVertex][i] == 1 && !visited[i]) {
            dfs(graph, vertices, i, visited);
        }
    }
}

int main() {
    int vertices, edges, src, dest;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (src dest):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &src, &dest);
        graph[src][dest] = 1;
        graph[dest][src] = 1; // For undirected graph
    }

    int startVertex;
    printf("Enter the starting vertex for DFS: ");
    scanf("%d", &startVertex);

    bool visited[MAX_VERTICES] = {false};
    printf("Depth First Traversal starting from vertex %d: ", startVertex);
    dfs(graph, vertices, startVertex, visited);

    printf("\n");

    return 0;
}