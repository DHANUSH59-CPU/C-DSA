#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) cout<<"the number is neither a prime nor composite";
    else if(a==1) cout<<"the number is composite";
    else cout<<"the number is prime";

    return 0;
}