#include<bits/stdc++.h>
using namespace std;
bool armstrn(int n){
    int dup=n;
    int k=to_string(n).length();
    int sum=0;
    while (dup>0){
        int ld=dup%10;
        sum=sum+pow(ld,k);
        dup/=10;
    }
    return sum== n;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if (armstrn(num)) cout<<num<<" "<<"is Armstrong";
    else  cout<<num<<" "<<"is not Armstrong";
       return 0;
}