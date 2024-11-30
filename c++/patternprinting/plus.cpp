#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int a=n/2+1;
           if(j==a || i==a){
            cout<<"* ";
           }
           else{
           cout<<"  ";
           }
        }
        cout<<endl;
    }
}