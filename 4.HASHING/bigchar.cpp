#include <bits/stdc++.h>
using namespace std;

int main() {

   string s;
   cin>>s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]-'A'] += 1;
    }

    int q;
    cout<<"How many alphabets to check";
    cin >> q;
    while (q--) {
        char C;
        cin >> C;
        // fetching:
        cout << hash[C-'A'] << endl;
    }
    return 0;
}
