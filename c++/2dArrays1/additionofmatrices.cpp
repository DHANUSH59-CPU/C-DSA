#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows 1st matrix :";
    cin>>m;
     int n;
    cout<<"Enter the number of colunms :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int p;
    cout<<"Enter the number of rows 2nd matrix :";
    cin>>p;
     int q;
    cout<<"Enter the number of 2nd colunms :";
    cin>>q;
    cout<<"Enter the elements of 2nd array :";
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    // Addition
    if(p==m && q==n){
         for(int i=0;i<p;i++){
             for(int j=0;j<q;j++){
                brr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    }
    else{
        cout<<"No addition of matrix";
    }
    // print
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    