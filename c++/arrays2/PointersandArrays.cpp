#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,2,1};
    int *ptr=&arr[0];// or arr (points to 0th address)
    cout<<ptr<<endl;
    ptr[0]=80; // *ptr=80;
    for(int i=0;i<=3;i++){
        cout<<ptr[i]<<" "; // cout<<*ptr and ptr++
    }
}