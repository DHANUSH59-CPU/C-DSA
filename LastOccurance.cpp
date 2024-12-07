#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,5,9};
    int n=12;
    int target=3;
    //binary search
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]!=target){
                flag=true;
                cout<<mid;
                break;
            }
            else{  // arr[mid]==x
                lo=mid+1;
            }
        }
            else if(arr[mid]<target) lo=mid+1;
            else hi=mid-1;
        
    }
    if(flag==false) return -1;

}