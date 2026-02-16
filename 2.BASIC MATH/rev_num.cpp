#include<bits/stdc++.h>
using namespace std;
int rev_num(int n){
    int rev_num = 0;
    while (n>0){
        int ld=n%10;
        rev_num= rev_num*10 + ld;
        n=n/10;
    }
    return rev_num;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Reversed number: "<<rev_num(num)<<endl;
    return 0;

}