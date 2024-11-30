#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string str="dhanush kumar sr";
    cout<<str.length()<<endl; // 0-.str.length-1
    str.push_back('e');// only char allowed not string
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;


    // + operator
    string s="abc";
    cout<<s<<endl;
    string t="def";
    s=s+t;
    cout<<s<<endl;

    // reverse
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    reverse(s.begin()+2,s.end()-1);
    reverse(s.begin()+1,begin()+5);
    cout<<s<<endl;
}
   