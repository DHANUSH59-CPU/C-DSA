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
    // to find largest
    int max=INT_MIN;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"The max is :"<<max;

}