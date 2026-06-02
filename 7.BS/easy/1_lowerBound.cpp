#include<bits/stdc++.h>
using namespace std;
int LB(vector<int> arr,int n,int x){
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
    vector<int> arr={3,6,7,8,24,64,946};
    int n=arr.size();
    int x=65;
    int ind=LB(arr,n,x);
    cout<<"Lower Bound "<<ind<<"\n";
    return 0;
}