#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of rows of matrix :";
    cin>>m;
    int n;
    cout<<"Enter the no of columns of matrix :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || (i==0 && j==m-1) || (i==n-1 && j==0)){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}