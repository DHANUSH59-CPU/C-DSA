#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse(int i,int j,vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
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
    int k;
    cout<<"Enter the number of steps the array must be roated :";
    cin>>k;
    if(k>n){
        k=k%n;
    }
    display(v);
    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    display(v);
}