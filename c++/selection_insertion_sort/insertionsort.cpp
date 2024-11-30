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
    // insertion sort
    for(int i=1;i<n;i++){ // n-1 times
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
}
       display(n,arr);
}