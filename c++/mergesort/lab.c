#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void merge(int a[], int n1, int b[], int n2, int res[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    while (i < n1) {
        res[k++] = a[i++];
    }
    
    while (j < n2) {
        res[k++] = b[j++];
    }
}

void mergesort(int v[], int n) {
    if (n <= 1) return;
    
    int n1 = n / 2;
    int n2 = n - n1;
    int a[n1], b[n2];
    
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }
    
    mergesort(a, n1);
    mergesort(b, n2);
    
    merge(a, n1, b, n2, v);
}

void display(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}



int main() {
    srand(time(0));

    // Sizes of arrays to test
    int sizes[] = {5000, 10000, 15000, 20000, 25000};

    for (int s = 0; s < 5; s++) {
        int n = sizes[s];
        int a[n];

        // Generate random numbers
        for (int i = 0; i < n; i++) {
            a[i] = rand();
        }

        // Display the unsorted array (for debugging purposes, can be commented out)
        // display(v, n);

        double start = clock();

        // Perform merge sort
        mergesort(a, n);

        double end = clock();
        double duration = end - start;

        printf("Time taken to sort %d elements: %lf seconds\n", n, (double)(end-start)/(double)CLOCKS_PER_SEC*1000);

        // Display the sorted array (for debugging purposes, can be commented out)
        // display(v, n);
    }

    return 0;
}
