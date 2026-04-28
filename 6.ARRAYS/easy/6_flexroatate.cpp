#include <bits/stdc++.h>
using namespace std;

// 1. Helper function to reverse a subarray from index start to end
void reverseArray(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

// 2. Main function to rotate array left or right by k steps
vector<int> rotateArray(vector<int>& nums, int k, string direction) {
    int n = nums.size();

    // Edge case: agar vector empty hai ya rotation ki zarurat nahi hai
    if (n == 0 || k == 0) return nums;

    // k ko normalize karna (agar k > n ho toh)
    k = k % n;

    if (direction == "right") {
        // Step 1: Poore array ko ulta karo
        reverseArray(nums, 0, n - 1);
        // Step 2: Pehle k elements ko ulta karo
        reverseArray(nums, 0, k - 1);
        // Step 3: Baaki bache n-k elements ko ulta karo
        reverseArray(nums, k, n - 1);
    } 
    else if (direction == "left") {
        // Step 1: Pehle k elements ko ulta karo
        reverseArray(nums, 0, k - 1);
        // Step 2: Baaki bache n-k elements ko ulta karo
        reverseArray(nums, k, n - 1);
        // Step 3: Poore array ko ulta karo
        reverseArray(nums, 0, n - 1);
    }

    return nums;
}

// 3. Driver code (Input/Output)
int main() {
    int n;
    cout << "Enter the no. of elements: ";
    if (!(cin >> n)) return 0;

    vector<int> nums;
    int temp;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> temp; 
        nums.push_back(temp);
    }

    int k;
    cout << "Enter no. of places to rotate: ";
    cin >> k;

    string dir;
    cout << "Enter direction (left/right): ";
    cin >> dir;

    // Function call
    vector<int> result = rotateArray(nums, k, dir);

    // Final Output
    cout << "Rotated Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


