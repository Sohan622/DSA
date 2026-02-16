#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"How many ele? ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    

    int q;
    cout<<"How many ele to check? ";
    cin >> q;

    while (q--) {
        int number;
        cout<<"Which num to check ";
        cin >> number;
        // fetch:
        cout << "Count: "<<mp[number] << endl;
    }
    return 0;
}
