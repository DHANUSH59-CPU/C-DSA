#include<iostream>
using namespace std;

                // only of n x n matrix
int main(){  
    int n;
    cout<<"Enter the number of rows/colums :";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // roatate
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}