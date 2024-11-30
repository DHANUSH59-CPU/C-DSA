#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
}