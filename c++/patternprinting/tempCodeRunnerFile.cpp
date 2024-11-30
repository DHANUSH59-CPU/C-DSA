#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"* ";
        }
        nsp++;
        nst--;
        cout<<endl;
    }
}