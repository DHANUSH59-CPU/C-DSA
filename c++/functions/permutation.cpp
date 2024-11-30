#include<iostream>
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
using namespace std;
int main(){
    int n,r;
    cout<<"enter the values of n & r :";
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
    return 0;
}