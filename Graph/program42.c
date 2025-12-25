#include <stdio.h>

#define MAX_VERTICES 100

int dfsCheck(int node, int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int vis[], int pathVis[]) {
    vis[node] = 1;
    pathVis[node] = 1;

    for (int i = 0; i < vertices; i++) {
        if (graph[node][i] == 1) { 
            if (vis[i] == 0) {
                if (dfsCheck(i, graph, vertices, vis, pathVis)) {
                    return 1;
                }
            } else if (pathVis[i] == 1) {
                return 1;
            }
        }
    }

    pathVis[node] = 0; 
    return 0;
}

int isCyclic(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    int vis[MAX_VERTICES] = {0};
    int pathVis[MAX_VERTICES] = {0};

    for (int i = 0; i < vertices; i++) {
        if (vis[i] == 0) {
            if (dfsCheck(i, graph, vertices, vis, pathVis)) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int vertices, edges;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (src dest):\n");
    for (int i = 0; i < edges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        graph[src][dest] = 1; // Directed graph
    }

    if (isCyclic(graph, vertices)) {
        printf("Cycle detected in the directed graph.\n");
    } else {
        printf("No cycle in the directed graph.\n");
    }

    return 0;
}

