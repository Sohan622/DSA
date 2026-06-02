#include <bits/stdc++.h>
using namespace std;
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;

            // if left half sorted
            if (nums[low] <= nums[mid]) {

                // If target lies in the sorted left half, search there
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                }
                // Else search in the right half
                else {
                    low = mid + 1;
                }
            }

            // else right half is sorted
            else {

                // If target lies in the sorted right half, search there
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                }
                // Else search in the left half
                else {
                    high = mid - 1;
                }
            }
        }

        // If not found, return -1
        return -1;
    }

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = search(nums, target);

    cout << result << endl;

    return 0;
}
