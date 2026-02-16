#include <bits/stdc++.h>
using namespace std;

//     // Function to reverse an array
//     vector<int> reverseArray(vector<int>& arr) {
//         // Get the size of the array
//         int n = arr.size();

//         // Create a new vector to store the reversed array
//         vector<int> ans(n);

//         // Loop through the array from start to end
//         for (int i = 0; i < n; i++) {
//             // Place the element from end of arr into beginning of ans
//             ans[i] = arr[n - 1 - i];
//         }

//         // Return the reversed array
//         return ans;
//     
// }






// void reverseArray(vector<int> &arr){
//     int p1=0, p2=arr.size()-1;
//     while(p1<p2){
//         swap(arr[p1],arr[p2]);
//         p1++;p2--;
//     }
//     }
void reverseArray(vector<int> &arr){
reverse(arr.begin(),arr.end());   

}
// Driver code
int main() {
    // Input array
    vector<int> arr = {1, 2, 342, 4,245};

  

    
     reverseArray(arr);

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


