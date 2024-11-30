#include<iostream>
using namespace std;
 void fun(int x=7,int y=8){
        cout<<"address of x "<<&x<<endl;
        cout<<"address of y "<<&y<<endl;
    }
int main(){
   int x=3;
   int y=4;
    cout<<"address of x "<<&x<<endl;
    cout<<"address of y "<<&y<<endl;
    fun(x,y);
    return 0;
}