#include <bits/stdc++.h>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        long long maxi = LLONG_MIN; 
        long long sum = 0;
        int start = 0; 
        int ansStart = -1, ansEnd = -1; 
        
        for (int i = 0; i < nums.size(); i++) {
            
            // update starting index if sum is reset
            if (sum == 0) {
                start = i;
            }
            
            // add current element to the sum
            sum += nums[i]; 
            
            /* Update maxi and subarray indice
            s if current sum is greater*/
            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0;
            }
        }
        
        
        cout << "The subarray is: [";
        for (int i = ansStart; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
        cout << "]" << endl;
        
        
        return maxi;
    }


int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}