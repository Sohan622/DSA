#include <bits/stdc++.h>
using namespace std;
vector<int> get_div(int N)
{
    vector<int> res;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            res.push_back(i);
            if (i != N / i)
                res.push_back(N / i);
        }
    }
    return res;
}
int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    vector<int> result= get_div(num);
    cout<<"The divisors are: ";
    for (int val : result)cout<<val<<" ";
    return 0;
}