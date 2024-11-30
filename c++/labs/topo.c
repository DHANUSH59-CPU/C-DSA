#include <stdio.h>

int top = -1; // Stack top pointer
int k = -1;   // Solution array index

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int cost[n][n]; // Adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    int s[10];        // Stack to hold nodes with in-degree 0
    int sol[10];      // Array to hold the topological order
    int indegree[10]; // Array to store in-degrees of nodes

    // Calculate in-degrees
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += cost[i][j];
        }
        indegree[j] = sum;
    }

    // Initialize the stack with nodes having in-degree 0
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            s[++top] = i;
        }
    }

    // Perform topological sorting
    while (top != -1) {
        int u = s[top--];
        sol[++k] = u;

        for (int j = 0; j < n; j++) {
            if (cost[u][j] == 1) {
                indegree[j] -= 1;
                if (indegree[j] == 0) {
                    s[++top] = j;
                }
            }
        }
    }

    // Print the topological order
    for (k = 0; k < n; k++) {
        printf("%d ", sol[k]);
    }

    return 0;
}
