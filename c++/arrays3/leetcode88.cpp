           // merge two sorted arrays
#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int m=arr1.size();
    int n=arr2.size();
     vector<int> v(m+n);
    int i=0;// for arr1
    int j=0;// for arr2
    int k=0;// for arr3
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            v[k]=arr1[i];
            i++;
            k++;
        }
        else{// means arr2[j]<arr1[i]
            v[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i==m){// all elements arr1 is over
        while(j<=n-1){
            v[k]=arr2[j];
            j++;
            k++;
        }
       
    }
    if(j==n){// all elements arr2 is over
        while(i<=m-1){
        v[k]=arr1[i];
        i++;
        k++; 
        }
       
    }
    return v;
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<=arr1.size()-1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<" ";
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(11);
    arr2.push_back(12);
    for(int i=0;i<=arr2.size()-1;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v=merge(arr1,arr2);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }


}