#include<iostream>
#include<vector>
 using namespace std;

    void display(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    display(arr,n);
    // bubble sort
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        for(int j=0;j<n-1;j++){ //swap
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    display(arr,n);
}