#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            for(int k=0;k<=space;k++){
                cout<<" ";
                space--;
            }
            if(i%2==0){
                cout<<"*";
            }
            else{
                cout<<"#";
            }
        }
            
}
}