#include<stdio.h>
#define MAX 100

void knapsack(int p[], int w[], int n, int M);
void sortItemsByRatio(int p[], int w[], int n);

void main() {
    int p[MAX], w[MAX], n, M;
    
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    
    printf("Enter profit:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    
    printf("Enter weights:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }
    
    printf("Enter capacity:\n");
    scanf("%d", &M);
    
    // Corrected the parameter order
    knapsack(p, w, n, M);
    return;
}

void knapsack(int p[], int w[], int n, int M) {
    int load = 0;  // Changed to int to reflect its use as a weight
    float x[MAX];
    for (int i = 0; i < n; i++) {
        x[i] = 0.0;
    }
    sortItemsByRatio(p, w, n);
    int i = 0;
    while (i < n && load < M) {
        if (w[i] <= (M - load)) {
            load = load + w[i];
            x[i] = 1.0;
        } else {
            x[i] = (float)(M - load) / w[i];
            load = M; //51.3
        }
        i++;
    }
    float profit = 0.0;
    for (int i = 0; i < n; i++) {
        profit += (x[i] * p[i]);
    }
    printf("Profit is : %f\n", profit);
    return;
}

void sortItemsByRatio(int p[], int w[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            float r1 = (float)p[j] / w[j];
            float r2 = (float)p[j + 1] / w[j + 1];
            if (r1 < r2) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                temp = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp;
            }
        }
    }
}
