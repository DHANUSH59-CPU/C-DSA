#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &v){
     for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort01(vector<int> &v){
    int n=v.size();
    int noz=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else no1++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}

void sort01m2(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(v[i]==0) i++; // v[i]==0 (for actual problem watch video)
         if(v[j]==1) j--;// watch array 3 1st questions because he has discused some mistakes which u should know 
         else if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    display(v);
    // sort(v.begin(),v.end()); //(method 1)
     sort01(v);// (method 2)
    //sort01m2(v);
    display(v);
   
}