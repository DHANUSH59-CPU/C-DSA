#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    // reverese using while loop
    // int i=0;
    // int j=v.size()-1-i;
    // while(i<=j){
    //     //reverse
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // reverse using for loop
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
         int temp=v[i];
       v[i]=v[j];
       v[j]=temp;
    }
    cout<<"Reverse of the array is :";
     for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}