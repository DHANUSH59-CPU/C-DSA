#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows :";
    cin>>m;
     int n;
    cout<<"Enter the number of counms :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    }
    // to find transpose
    int t[n][m];   // balaji n m and i j to j i
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                 t[i][j]=arr[j][i]; 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    

}