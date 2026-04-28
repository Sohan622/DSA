#include <bits/stdc++.h>
using namespace std;



    // // Removes duplicates using unordered_set and returns count of unique elements
    // int removeDuplicates(vector<int>& nums) {
    //     // Unordered set to store elements we have already seen
    //     unordered_set<int> seen;

    //     // Index where the next unique element will be written
    //     int index = 0;

    //     // Loop over each element in the array
    //     for (int num : nums) {
    //         // If num is not in seen, it's unique
    //         if (seen.find(num) == seen.end()) {
    //             // Add this num to the set of seen numbers
    //             seen.insert(num);

    //             // Overwrite nums[index] with this unique num
    //             nums[index] = num;

    //             // Move index forward
    //             index++;
    //         }
    //     }
    //     // Return count of unique elements
    //     return index;
    // }
int removeDuplicates(vector<int>&nums){
    if(nums.empty())return 0;
    sort(nums.begin(),nums.end());
    int i=0;
    for (int j=1;j<nums.size();j++){
        if (nums[j]!=nums[i]){i++;nums[i]=nums[j];   }
        
}return i+1;}

int main() {
    vector<int> nums = {0,0,0,0,1,1,1,5,2,2,3,3,4,4};

    
    int k = removeDuplicates(nums);

    cout << "number of uniques= " << k << "\nArray after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
