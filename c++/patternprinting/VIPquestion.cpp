#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            // int d=a+64;
            // char ch=(char)d;
            //cout<<ch<<" " ;
            cout<<"* ";
           //a++;
        }
        cout<<endl;
    }
}