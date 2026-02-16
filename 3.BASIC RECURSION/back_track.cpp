#include<bits/stdc++.h>
using namespace std;
int onetoN(int N,int current)
{if (current>N) return current;
 
 onetoN(N,current+1);
 cout<<current<<" ";
}
int main(){
    int num,c;
    cout<<"Enter num and start: ";
    cin>>num>>c;
    onetoN(num,c);
    return 0;
}
