#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  // it is like a stack
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(0);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}