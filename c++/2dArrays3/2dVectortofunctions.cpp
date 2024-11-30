    #include<iostream>
    #include<vector>
    using namespace std;

    void change2dvector(vector< vector<int> > &v){
    v[0][0]=9;
    }

    int main(){
            vector<int> v1;
            v1.push_back(1);
            v1.push_back(1);
            v1.push_back(1);

            vector<int> v2;
            v2.push_back(4);
            v2.push_back(5);

            vector<int> v3;
            v3.push_back(6);
            v3.push_back(6);
            v3.push_back(6);
            v3.push_back(6);
            v3.push_back(6);

            vector<vector<int>> v;
            v.push_back(v1);
            v.push_back(v2);
            v.push_back(v3);

            cout<<v[0][0]<<endl;// should give error not 0
            change2dvector(v);
            cout<<v[0][0];
    }
