#include <stdio.h>
#include <limits.h>

// Function to display the array
void display(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, -2, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    display(n, arr);

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int mindx = -1;
        // Find the minimum element in the unsorted part of the array
        for (int j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
                mindx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }

    // Display the sorted array
    display(n, arr);

    return 0;
}
