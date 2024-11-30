#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be found :";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++)
        if(arr[i]==x) flag=true;
    
    if(flag==true){
        cout<<"present";
    }
    else{
        cout<<"404 Error Found";
    }
}