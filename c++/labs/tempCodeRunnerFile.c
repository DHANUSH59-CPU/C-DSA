#include <stdio.h>

#define INF 99

void prims(int n, int cost[][n], int T[n-1][2], int d[], int *sum) {
    int min, src;

    for (int i = 0; i < n; i++) {
        min = INF;
        for (int j = 0; j < n; j++) {
            if (cost[i][j] < min && cost[i][j] != 0) {
                min = cost[i][j];
                src = i;
            }
        }
    }

    int V[n], p[n];
    for (int i = 0; i < n; i++) {
        d[i] = cost[src][i];
        V[i] = 0;
        p[i] = src;
    }

    V[src] = 1;
    int u, k = 0;
    *sum = 0;

    for (int i = 1; i < n; i++) {
        min = INF;
        u = -1;

        for (int j = 0; j < n; j++) {
            if (V[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        }

        if (u == -1) return;

        V[u] = 1;
        T[k][0] = p[u];
        T[k][1] = u;
        *sum += cost[u][p[u]];
        k++;

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

    int cost[n][n], T[n-1][2], d[n], sum;

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    prims(n, cost, T, d, &sum);

    printf("The Minimum Spanning Tree is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d - %d\n", T[i][0], T[i][1]);
    }

    printf("Total cost: %d\n", sum);

    return 0;
}