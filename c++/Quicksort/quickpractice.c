#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partition(int a[], int si, int ei) {
    int pivotElement = a[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++) {
        if (a[i] < pivotElement) {
            count++;
        }
    }
    int pidx = count + si;
    int temp = a[si];
    a[si] = a[pidx];
    a[pidx] = temp;
    
    int i = si;
    int j = ei;
    while (i < pidx && j > pidx) {
        if (a[i] <= pivotElement) i++;
        if (a[j] > pivotElement) j--;
        else if (a[i] > pivotElement && a[j] <= pivotElement) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    return pidx;
}

void quicksort(int a[], int si, int ei) {
    if (si >= ei) return; // Base case to stop recursion
    int pi = partition(a, si, ei);

    quicksort(a, si, pi - 1);  // Left side of pivot
    quicksort(a, pi + 1, ei);  // Right side of pivot
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
