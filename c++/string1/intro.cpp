#include<iostream>
using namespace std;

int main(){
    char str[]={'a','b','c','d'};// this is not null terminated
    cout<<str<<endl;
    int arr[]={1,2,3,4};
    cout<<arr<<endl;
    for(int i=0;str[i]!='\0';i++){
        cout<<(int)str[i]<<" ";
    }

}