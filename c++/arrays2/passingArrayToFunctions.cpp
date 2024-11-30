#include<iostream>
using namespace std;

void display(/* int a[] */ int *a  ,int size){ //here a is pointer pointing to 1st element of array
     for(int i=0;i<=size-1;i++){
        cout<<*a<<" "; //a[i]
        a++; // ntg here if u put a[i]
    }
    return;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);// we are sending adress of arr
}