#include<iostream>
using namespace std;
bool pal (int n){
    int rev = 0;
    int dup=n;
    int ld=0;
    while (dup>0){
        ld=dup%10;
        rev=rev*10+ld;
        dup=dup/10;
    }
    if (n==rev) return true;
    return false;
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if (pal(num)) cout<<num<<" is palindrome"<<endl;
    else cout<<num<<" is not palindrome"<<endl;
    return 0;
}