#include <bits/stdc++.h>
using namespace std;

int main() {

   string s;
    cout<<"Enter string ";
    cin>>s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]-'a'] += 1;
    }

    int q;
    cout<<"How many alphabets u want to check? ";
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetching:
        cout << hash[c-'a'] << endl;
    }
    return 0;
}
