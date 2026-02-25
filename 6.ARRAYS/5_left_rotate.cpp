#include<bits/stdc++.h>
using namespace std;
void L_rot(vector<int>&nums){
    int temp=nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1]=nums[i];
    }
    nums[nums.size()-1]=temp;
}
int main(){
    vector<int>nums;
    int temp,n;
    cout<<"How many ele: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    L_rot(nums);
    for(int i:nums){cout<<i<<" ";}
    return 0;
}