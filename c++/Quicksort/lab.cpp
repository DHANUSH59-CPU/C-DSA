#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivotElement = arr[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotElement) count++;
    }

    int pivotIdx = count + si;
    swap(arr[si], arr[pivotIdx]);
    
    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] <= pivotElement) i++;
        if (arr[j] > pivotElement) j--;
        
        if (arr[i] > pivotElement && arr[j] <= pivotElement) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return;

    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
}

int main() {
    srand(time(0));

    // Sizes of arrays to test
    int sizes[] = {5000, 10000, 15000, 20000, 25000};

    for (int s = 0; s < 5; s++) {
        int n = sizes[s];
        int* arr = new int[n];

        // Generate random numbers
        for (int i = 0; i < n; i++) {
            arr[i] = rand();
        }

        // Display the unsorted array (for debugging purposes, can be commented out)
        // cout << "Array before sorting: ";
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        auto start = chrono::high_resolution_clock::now();

        // Perform quicksort
        quicksort(arr, 0, n - 1);

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;

        cout << "Time taken to sort " << n << " elements: "
             << duration.count() << " seconds" << endl;

        // Display the sorted array (for debugging purposes, can be commented out)
        // cout << "Array after sorting: ";
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        delete[] arr;
    }

    return 0;
}