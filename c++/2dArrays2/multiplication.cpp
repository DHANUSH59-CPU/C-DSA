#include<iostream>
using namespace std;
 int main(){
     int m;
    cout<<"Enter the number of rows 1st matrix :";
    cin>>m;
     int n;
    cout<<"Enter the number of colunms of 1st :";
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
    // multiplication
          int res[m][q];
    if(n!=p){
        cout<<"multiplication not possible";
        return -1;
    }

    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
    }
    // print 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
 }