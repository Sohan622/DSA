#include<bits/stdc++.h>
using namespace std;
int Maxele(vector<int> &arr){
    int max=arr[0];
    for(int j=0;j<arr.size();j++){
        if (arr[j]>max) max=arr[j];
    }
    return max;

};
int main(){int n ;
    cout<<"Enter no. of ele: ";
    cin>>n;
    vector <int> arr(n);

   cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
cout<<"Max element is: "<<Maxele(arr);
return 0 ;
}