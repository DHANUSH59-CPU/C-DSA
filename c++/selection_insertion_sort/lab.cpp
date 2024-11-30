#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

void display(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = i; j < n; j++) {
            if (min > arr[j]) {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
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
        // display(n, arr);

        auto start = chrono::high_resolution_clock::now();

        // Perform selection sort
        selectionSort(arr, n);

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;

        cout << "Time taken to sort " << n << " elements: "
             << duration.count() << " seconds" << endl;

        // Display the sorted array (for debugging purposes, can be commented out)
        // display(n, arr);

        delete[] arr;
    }

    return 0;
}