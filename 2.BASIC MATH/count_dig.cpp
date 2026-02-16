 #include<bits/stdc++.h>
using namespace std;
/*int count_dig(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;}*/
int count_dig(int n){
    int count=int(log10(n)+1);
    return count;
}   


int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Digits count: "<<count_dig(num);
    return 0;}



