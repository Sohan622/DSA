#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    int count=0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            count++;
            if(i!=n%i)count++;}

    }
    return count==2;
}
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    if(is_prime(num)){cout<<num<<" "<<"is prime";}
    else {cout<<num<<" "<<"is not prime";}
    return 0;
}