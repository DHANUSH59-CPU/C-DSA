 #include<iostream>
#include<vector>
using namespace std;
                              // watch video for another method
vector<vector<int>> generate(int numRows) {
         vector <vector<int> > v;
         for(int i=1;i<=numRows;i++){
            vector<int> a(i);
            v.push_back(a);
         }
         for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==j){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=v[i-1][j]+v[i-1][j-1];
                }
            }
         }
         return v;

    }

int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    vector <vector<int> > v=generate(n);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
}
