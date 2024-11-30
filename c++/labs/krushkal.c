#include<stdio.h>
#define INF 999

int find(int v, int p[]) {
    if (p[v] != v) {
        p[v] = find(p[v], p);
    }
    return p[v];
}

void kruskal(int n, int cost[][n]) {
    int p[n], u, v, min;
    int t[n-1][2];
    int k = 0, sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        p[i] = i;
    }

    while (count != (n - 1)) {
        min = INF;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cost[i][j] != 0 && cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        int v1 = find(u, p);
        int v2 = find(v, p);

        if (v1 != v2) {
            t[k][0] = u;
            t[k][1] = v;
            k++;
            sum += min;
            p[v2] = v1;
            count++;
        }
        cost[u][v] = cost[v][u] = INF;
    }

    printf("The edges of the minimum spanning tree are:\n");
    for (int i = 0; i < n-1; i++) {
        printf("%d-%d = %d\n", t[i][0], t[i][1], cost[t[i][0]][t[i][1]]);
    }
    printf("The total cost of the minimum spanning tree is: %d\n", sum);
}


int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    int cost[n][n];
    printf("Enter the adjacency cost matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    kruskal(n, cost);

    return 0;
}
