#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout<<"the sum of the digits is "<<sum;
    return 0;
}