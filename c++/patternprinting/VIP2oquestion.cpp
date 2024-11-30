#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int q=1;q<=i-1;q++){ // make chnages for ascii values
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}