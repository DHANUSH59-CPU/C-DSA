#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

 void display(int n,int arr[]){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int arr[]={4,-2,9,6};
    int n=sizeof(arr) / sizeof(arr[0]);
    //display
    display(n,arr);
    // selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        // minimum element calculation in organe box
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    display(n,arr);
}