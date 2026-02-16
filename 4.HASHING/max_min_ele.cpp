#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n){
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    int element,count;
    int maxfreq=0,minfreq=n,maxele=0,minele=0;
    for(auto it:map){
        element=it.first;
        count=it.second;
    
     if(count>maxfreq){
       maxfreq=count;maxele=element;
    }
    if(count<minfreq){
      minfreq=count;minele=element;
    }
    }
    cout<<"Elements with highest frequency: "<<maxele<<endl;
    cout<<"Elements with lowest frequency: "<<minele<<endl;

}

int main (){
    int n;
    cout<<"How many elements: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
    freq(arr,n);
    
    
return 0;
}