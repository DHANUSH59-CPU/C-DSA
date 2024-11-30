#include <stdio.h>

#define INF 99

void prims(int n, int cost[][n], int T[n-1][2], int *sum) {
    int d[n], V[n], p[n];

    int src = 0;
    for (int i = 0; i < n; i++) {
        d[i] = cost[src][i];
        V[i] = 0; // All vertices are initially unvisited
        p[i] = src;
    }

    V[src] = 1; // Mark the source vertex as visited
    int k = 0;
    *sum = 0;

    for (int i = 1; i < n; i++) {
        int min = INF, u = -1;

        // Find the vertex with the smallest edge cost to include in the MST
        for (int j = 0; j < n; j++) {
            if (V[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        }

        if (u == -1) return;

        printf("Selected edge: %d - %d with cost %d\n", p[u], u, cost[u][p[u]]); // Debug print

        V[u] = 1; // Mark the vertex as visited
        T[k][0] = p[u];
        T[k][1] = u;
        *sum += cost[u][p[u]];
        k++;

        // Update the distance array with the minimum edge cost from the newly added vertex
        for (int v = 0; v < n; v++) {
            if (V[v] == 0 && cost[u][v] < d[v] && cost[u][v] != 0) {
                d[v] = cost[u][v];
                p[v] = u;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int cost[n][n], T[n-1][2], sum;

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    prims(n, cost, T, &sum);

    printf("The Minimum Spanning Tree is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d - %d\n", T[i][0], T[i][1]);
    }

    printf("Total cost: %d\n", sum);

    return 0;
}
