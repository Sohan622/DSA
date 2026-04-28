#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>&nums){
    int j=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }   
        if (j==-1)return;
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
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
    moveZeroes(nums);
    for(int i : nums){
        cout<<i<<" ";

    }
    return 0;
}