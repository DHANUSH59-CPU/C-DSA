#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortColors1(vector<int>& nums) {
        //one pass
        int lo=0;
        int mid=0;
        int hi=nums.size()-1;
        // 1) mid ke baare me socho
        // 2) 0 to lo-1 ->0 ,hi+1 to end ->2
        // lo to mid-1 -> 1
        while(mid<=hi){
            if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[hi];
                nums[hi]=temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[lo];
                nums[lo]=temp;
                lo++;
                mid++;
            }
            else{
                mid++;
            }
        }

    }

 void sortColors(vector<int>& nums) {
        //two pass
        int no0=0;
        int no1=0;
        int no2=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==0) no0++;
            if(nums[i]==1) no1++;
            if(nums[i]==2) no2++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<no0) nums[i]=0;
            else if(i<(no0+no1)) nums[i]=1;
            else nums[i]=2;
        }
    }
 

int main(){
    vector<int> v;
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    cout<<"Enter the elements of array :";
   for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    //sortColors(v); (two pass)
    sortColors1(v); //(one pass)

    cout<<"The output is :";
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
}