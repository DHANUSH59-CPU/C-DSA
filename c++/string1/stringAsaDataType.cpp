#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    //cin>>s;// works only if string has no spaces
    getline(cin,s);//VVIMP
    cout<<s;
}