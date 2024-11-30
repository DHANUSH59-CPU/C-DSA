#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    string s;
    cout<<"Enter the string s :";
    getline(cin,s);
    string t;
    cout<<"Enter the string t :";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"Is a Anagram";
    }


}