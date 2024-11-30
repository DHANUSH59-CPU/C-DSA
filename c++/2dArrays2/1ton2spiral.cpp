#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    int matrix[n][n];
    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = n - 1;
    int count = 1;
    int tne = n * n;

    while (minr <= maxr && minc <= maxc) {
        // Fill top row
        for (int j = minc; j <= maxc && count <= tne; j++) {
            matrix[minr][j] = count++;
        }
        minr++;

        // Fill right column
        for (int i = minr; i <= maxr && count <= tne; i++) {
            matrix[i][maxc] = count++;
        }
        maxc--;

        // Fill bottom row
        for (int j = maxc; j >= minc && count <= tne; j--) {
            matrix[maxr][j] = count++;
        }
        maxr--;

        // Fill left column
        for (int i = maxr; i >= minr && count <= tne; i--) {
            matrix[i][minc] = count++;
        }
        minc++;
    }

    // Print the matrix
    cout << "The generated " << n << "x" << n << " spiral matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
