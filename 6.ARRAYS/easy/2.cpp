#include<bits/stdc++.h>
using namespace std;
int second_small(vector<int> &arr,int n){
    if(n<2) return -1;
    int small = INT_MAX, second_small=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            
            second_small=small;
        small=arr[i];}
        else if (arr[i]<second_small && arr[i]>small){
            second_small=arr[i];
        }
    }
    return second_small;
}
int second_lar(vector <int> &arr,int n){
    if(n<2) return -1;
    int lar = INT_MIN, second_lar=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            
            second_lar=lar;
        lar=arr[i];}
        else if (arr[i]>second_lar && arr[i]<lar){
            second_lar=arr[i];
        }
    }
    return second_lar;
}
int main(){int n;
    cout<<"Enter no of elements: ";
    cin>>n; vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second smallest and second largest elemnt is "<<second_small(arr,n)<<" and "<<second_lar(arr,n);
    return 0;
}