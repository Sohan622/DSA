//max int whose square <=n
#include <bits/stdc++.h>
using namespace std;

int getSquareRoot(int n) {
    if (n< 2) return n;

    int start =1, end = n/ 2, ans = 0;

    while (start <= end) {
        long long mid =start+ (end- start)/2;

        if (mid*mid<=n) {
            ans=mid;
            start=mid+1;
        } else {
            end = mid-1;
        }
    }

    return ans;
}

int main() {
    cout << getSquareRoot(8) << endl;
    return 0;
}