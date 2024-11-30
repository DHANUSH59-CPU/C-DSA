#include<iostream>
using namespace std;

void find(int n,int *p1,int *p2){
    *p2=n%10;//last digit
    while(n>9){
        n/=10;
    }
    *p1=n;
    return;
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int firstdigit,lastdigit;
    int *p1=&firstdigit;
    int *p2=&lastdigit;
    find(n,p1,p2);
    cout<<firstdigit<<" "<<lastdigit;
}