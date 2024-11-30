#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;
    
}