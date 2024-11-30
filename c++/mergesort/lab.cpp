#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    while (i < a.size()) {
        res[k++] = a[i++];
    }
    
    while (j < b.size()) {
        res[k++] = b[j++];
    }
}

void mergesort(vector<int> &v) {
    int n = v.size();
    if (n <= 1) return;
    
    int n1 = n / 2;
    int n2 = n - n1;
    vector<int> a(n1), b(n2);
    
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }
    
    mergesort(a);
    mergesort(b);
    
    merge(a, b, v);
}

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));

    // Sizes of arrays to test
    int sizes[] = {5000, 10000, 15000, 20000, 25000};

    for (int s = 0; s < 5; s++) {
        int n = sizes[s];
        vector<int> v(n);

        // Generate random numbers
        for (int i = 0; i < n; i++) {
            v[i] = rand();
        }

        // Display the unsorted array (for debugging purposes, can be commented out)
        // display(v);

        auto start = chrono::high_resolution_clock::now();

        // Perform merge sort
        mergesort(v);

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;

        cout << "Time taken to sort " << n << " elements: "
             << duration.count() << " seconds" << endl;

        // Display the sorted array (for debugging purposes, can be commented out)
        // display(v);
    }

    return 0;
}