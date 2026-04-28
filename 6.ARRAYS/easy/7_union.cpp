#include<bits/stdc++.h>
using namespace std;
vector<int>Union(int arr1[],int arr2[],int n1,int n2){
    vector<int> U;int i=0,j=0;
    while(i<n1&&j<n2){
        if (arr1[i]<arr2[j]){

          if(U.empty()||U.back()!=arr1[i]) U.push_back(arr1[i]);
          i++;
        }
        else if(arr2[j]<arr1[i]){
            if(U.empty()||U.back()!=arr2[j]) U.push_back(arr2[j]);
            j++;
        }
        else{if(U.empty()||U.back()!=arr2[j]) U.push_back(arr2[j]);
            j++;i++;

        }}
        
        while (i < n1) {
            if (U.empty() || U.back() != arr1[i])
                U.push_back(arr1[i]);
            i++;
        }

        
        while (j < n2) {
            if (U.empty() || U.back() != arr2[j])
                U.push_back(arr2[j]);
            j++;
        }
    
return U;
};
int main(){
    int arr1[]={1,1,2,3,3,6};
    int arr2[]={3,4,4,6};
    int n1=6,n2=4;
    vector <int>result= Union(arr1,arr2,n1,n2);
    cout<<"Union: ";
    for(auto it:result)cout<<it<<" ";
    return 0;
}