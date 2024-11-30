#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++){
        int a=1;
        for (int j=1;j<=i;j++){
           if(i%2!=0){
            cout<<j<<" ";
           }
           else{
             int d=a+64;
            char ch=(char)d;
            cout<<ch<<" ";
            a++;
           }
        }
        cout<<endl;
    }
}