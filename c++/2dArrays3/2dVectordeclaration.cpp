#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5,2);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
     vector< vector<int> > v(3,vector<int> (4,3));
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
     }
     cout<<endl;
     cout<<v.size()<<endl;// row
     cout<<v[0].size();// column
}