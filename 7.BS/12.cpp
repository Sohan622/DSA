#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find a peak element using binary search
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2;

            // If mid element is greater than next
            if (nums[mid] > nums[mid + 1]) {
                // Move to left half
                high = mid;
            } else {
                // Move to right half
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    Solution obj;
    cout << obj.findPeakElement(nums) << endl;

    return 0;
}
