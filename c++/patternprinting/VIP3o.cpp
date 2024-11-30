#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int nst=n;
    int nsp=1;
    int nst2=2*n+1;
    int a=n+2;
    for(int i=1;i<=2*n+1;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<j<<" ";
        }
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
        }
        for(int j=a;j<=nst2;j++){
            cout<<j<<" ";
        }
        nsp+=2;
        nst--;
        a++;
        cout<<endl;
    }
}