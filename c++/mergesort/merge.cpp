#include<iostream>
#include<vector>
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

int main() {
    cout<<"Enter the size of the array :";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    mergesort(v);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
