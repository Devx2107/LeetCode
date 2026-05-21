// Last updated: 21/05/2026, 18:10:56
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;  // Minimum possible open brackets
        int high = 0; // Maximum possible open brackets

        for (char c : s) { 
            if (c == '(') {
                low++;
                high++;
            } 
            else if (c == ')') {
                low--; 
                high--;
            } 
            else { // c == '*'
                low--;  // Treat * as ')'
                high++; // Treat * as '('
            }
            
            // If high is negative, we have too many ')'
            if (high < 0) return false;
            
            // low shouldn't be negative; a '*' can be an empty string 
            // to keep the count at 0.
            if (low < 0) low = 0;
        }

        // If low is 0, it means we can balance all brackets.
        return low == 0;
    }
};