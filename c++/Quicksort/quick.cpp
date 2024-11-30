#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivotelement = arr[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotelement) count++;
    }

    int pivotidx = count + si;
    swap(arr[si], arr[pivotidx]);
    
    // Initialize i and j again after swapping
    int i = si;
    int j = ei;
    while (i < pivotidx && j > pivotidx) {
        // Increment i if the element is less than or equal to pivot
        if (arr[i] <= pivotelement) i++;
        // Decrement j if the element is greater than pivot
        if (arr[j] > pivotelement) j--;
        
        // Swap elements if they are on the wrong side of the pivot
        if (arr[i] > pivotelement && arr[j] <= pivotelement) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}

void quicksort(int arr[], int si, int ei) {
    if (si >= ei) return;

    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi - 1);
    quicksort(arr, pi + 1, ei);
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Printing the array before sorting
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n - 1);

    // Printing the array after sorting
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
