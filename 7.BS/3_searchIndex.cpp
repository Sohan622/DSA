#include<bits/stdc++.h>
using namespace std;
int SearchInd(vector<int> arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans =n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{low=mid+1;}
    }return ans;
}
int main(){
    vector<int> arr={3,6,7,18};
    int n=arr.size();
    int x=14;
    int ind=SearchInd(arr,n,x);
    cout<<"Index searched:"<<ind<<"\n";
    return 0;
}