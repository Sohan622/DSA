//remove outer parenthesis//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        // Initialize result string
        string result = "";  
        // Initialize nesting level counter
        int level = 0; 
        for (char ch : s) {
            // If we encounter '(', increase the level
            if (ch == '(') {
                // If we're inside a primitive, add '(' to result
                if (level > 0) result += ch;
                // Increase the nesting level for '('
                level++;  
            } 
            // If we encounter ')', decrease the level
            else if (ch == ')') {
                // Decrease the nesting level for ')'
                level--;  
                // If we're inside a primitive, add ')' to result
                if (level > 0) result += ch;
            }
        }
        return result;
    }
};

int main() {
    string s = "(()())(())";
    Solution sol;
    string ans = sol.removeOuterParentheses(s);

   
    cout << "The result is: " << ans << endl;

    return 0;
}