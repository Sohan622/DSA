#include<bits/stdc++.h>
using namespace std;
// int missingNum(vector<int>&arr){
//     int n= arr.size()+1;
    
//     for(int i=1;i<=n;i++){
//         bool found=false;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]==i) {found=true; break;}
//         }if (!found)return i;
//     }return -1;
// }

int missingNum(vector<int>&arr){
    int n=arr.size()+1;
    vector<int> hash(n+1,0);
    for(int i=0;i<n-1;i++){hash[arr[i]]++;}
    for(int i=1;i<=n;i++){
        if(hash[i]==0)
         {return i;}
        }
    return -1;
}
int main(){
    vector<int> arr={5,1,2,4};
    cout<<"missing num: "<<missingNum(arr);
    return 0;
}