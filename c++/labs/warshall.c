#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n;

void warshall(int a[][n], int n) {
    int i, j, k;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == 0 && (a[i][k] == 1 && a[k][j] == 1)) {
                    a[i][j] = 1;
                }
            }
        }
    }
}

int main() {
    clock_t start, end;
    double cputime;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int a[n][n];
    printf("\nEnter the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    start = clock();
    warshall(a, n);
    end = clock();

    printf("\nTransitive Closure:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    cputime = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken: %lf ms\n", cputime);

    return 0;
}