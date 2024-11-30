#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10;
        int ld=n%10;
        reverse=reverse+ld;
        n/=10;
    }
    cout<<reverse;
    return 0;
}