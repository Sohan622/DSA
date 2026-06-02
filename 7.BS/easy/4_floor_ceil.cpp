#include<bits/stdc++.h>
using namespace std;
int find_floor(int arr[],int n,int x){
    int low=0,high=n-1,ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
           low=mid+1;
        }else{high=mid-1;}
    }return ans;
}
int find_ceil(int arr[] ,int n,int x){
    int low=0,high=n-1,ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }
        else{low=mid+1;}
    }return ans;
}
int main(){
    int arr[]={3,4,4,7,8,10};
    int n=6,x=5;
    cout<<"Floor and Ceil: "<<find_floor(arr,n,x)<<","<<find_ceil(arr,n,x)<<endl;
    return 0;
}