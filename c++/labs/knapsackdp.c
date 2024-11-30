#include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the Knapsack problem using dynamic programming
int knapsack(int M, int wt[], int profit[], int n) {
    int i, w;
    int K[n + 1][M + 1];

    // Build the DP table K[][] in a bottom-up manner
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= M; w++) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (wt[i - 1] <= w) {
                K[i][w] = max(profit[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // The last cell of the table contains the maximum profit
    int res = K[n][M];
    printf("Maximum profit in Knapsack = %d\n", res);

    // Array to store the solution vector
    int included[n];
    for (i = 0; i < n; i++) {
        included[i] = 0;
    }

    // Trace back to find the items included in the optimal solution
    w = M;
    for (i = n; i > 0 && res > 0; i--) {
        // If the value comes from the item being included, it must be part of the optimal solution
        if (res != K[i - 1][w]) {
            included[i - 1] = 1;  // Mark this item as included
            res = res - profit[i - 1];
            w = w - wt[i - 1];
        }
    }

    // Print the solution vector (0s and 1s)
    printf("Solution vector: ");
    for (i = 0; i < n; i++) {
        printf("%d ", included[i]);
    }
    printf("\n");

    return K[n][M];
}

int main() {
    int n;
    printf("Enter the number of items :");
    scanf("%d",&n);
    int profit[n];
    printf("Enter the profits :");
    for(int i=0;i<n;i++){
        scanf("%d",&profit[i]);
    }
    int wt[n];
    printf("Enter the weights :");
    for(int i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }    
    int M;
    printf("Enter the capacity :");
    scanf("%d",&M);

    knapsack(M, wt, profit, n);

    return 0;
}
