#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    cout<<"Enter the target element :";
    cin>>x;
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) cout<<i; 
        break;
    }
}