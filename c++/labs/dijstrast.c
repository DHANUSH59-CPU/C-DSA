#include <stdio.h>
#define INF 999

int n;

void dijkstra(int n, int cost[][n], int src, int d[]) {
    int v[n], p[n];
    for (int i = 0; i < n; i++) {
        d[i] = cost[src][i];
        v[i] = 0;
        p[i] = src;
    }
    v[src] = 1;

    int min, u;
    for (int i = 0; i < n - 1; i++) {
        min = INF;
        u = -1;
        for (int j = 0; j < n; j++) {
            if (v[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        }
        if (u == -1) {
            return;
        }

        v[u] = 1;
        for (int k = 0; k < n; k++) {
            if (v[k] != 1 && cost[u][k] != 0 && (d[u] + cost[u][k] < d[k])) {
                d[k] = d[u] + cost[u][k];
                p[k] = u;
            }
        }
    }
}

int main() {
    int src;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    int cost[n][n];
    printf("Enter the adjacency cost matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    int d[n];
    printf("Enter the source vertex: ");
    scanf("%d", &src);
    dijkstra(n, cost, src, d);

    printf("The shortest path distances from source %d are:\n", src);
    for (int i = 0; i < n; i++) {
        printf("The distance from %d to %d is %d\n", src, i, d[i]);
    }

    return 0;
}
