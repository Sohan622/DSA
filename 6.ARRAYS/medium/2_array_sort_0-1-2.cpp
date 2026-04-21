#include <bits/stdc++.h>
using namespace std;


    //  Dutch National Flag Algorithm
    void sortZeroOneTwo(vector<int>& nums) {
        
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            // If current element is 0, swap with low and move both pointers forward
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            // If current element is 1, it's already in correct place → move mid forward
            else if (nums[mid] == 1) {
                mid++;
            }
            // If current element is 2, swap with high and move only high pointer backward
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }



int main() {
    
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortZeroOneTwo(nums);

    for (int val : nums)
        cout << val << " ";

    return 0;
}
