#include <bits/stdc++.h>
using namespace std;


vector<int> findTwoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp; 
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        // Check if the required number (complement) is already in the map
        if (mp.find(complement) != mp.end()) {
            // If found, return the index of the complement and current index i
            return {mp[complement], i};
        }

        // If not found, store the current number and its index for future checks
        mp[arr[i]] = i;
    }

    // Return empty vector if no such pair exists
    return {}; 
}

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // Get the result from the single function
    vector<int> result = findTwoSum(arr, target);

    // If the vector is not empty, it means "YES" and we have indices
    if (!result.empty()) {
        cout << "YES" << endl;
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}