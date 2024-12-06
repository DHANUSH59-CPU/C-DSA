#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string arr[]={"0123","0023","456","956","2901"};
    int max=stoi(arr[0]);
    string maxString="";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int x=stoi(arr[i]);
        if(max<x){
            max=x;
            maxString=arr[i];
        }
    }
    cout<<maxString;
}