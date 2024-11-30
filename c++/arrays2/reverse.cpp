#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
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
    display(v);
    vector <int> v2(v.size());
     for(int i=0;i<n;i++){
        v2[i]=v[v.size()-1-i];
    }
     display(v2);
}