#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    int n=s.length();
    cout<<s.substr(n/2);
}