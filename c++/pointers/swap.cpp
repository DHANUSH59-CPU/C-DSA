#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main(){
    int a=3;
    int b=5;
    // int *x=&a;
    // int *y=&b;
    // swap(x,y);
    swap(&a,&b);
    cout<<a<<" "<<b;
}