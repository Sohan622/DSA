#include <bits/stdc++.h>
using namespace std;
        vector<int> rearrangeBySign(vector<int>& A) {
        int n = A.size();
        vector<int> ans(n, 0);
        // posIndex will store index for next positive number (even index)
        // negIndex will store index for next negative number (odd index)
        int posIndex = 0, negIndex = 1;
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                // Place negative numbers at odd indices
                ans[negIndex] = A[i];
                negIndex += 2;
            } else {
                // Place positive numbers at even indices
                ans[posIndex] = A[i];
                posIndex += 2;
            }
        }
        return ans;
    }
int main() {
    // Initialize the input array
    vector<int> A = {1, 2, -4, -5};
    vector<int> result = rearrangeBySign(A);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
