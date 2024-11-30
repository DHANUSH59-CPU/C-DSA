    #include<iostream>
    using namespace std;
    int main(){
        int m;
    cout<<"Enter the number of rows 1st matrix :";
    cin>>m;
        int n;
    cout<<"Enter the number of colunms of 1st :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // print
    for(int i=m-1;i>=0;i--){
        if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
    }
