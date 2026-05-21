// Last updated: 21/05/2026, 18:14:27
class Solution {
public:
    string longestPalindrome(string s) {  
        int start = 0, maxLen = 0;
        for(int i = 0; i < s.size(); i++) {
            
            expand(s, i, i, start, maxLen);     // odd
            expand(s, i, i+1, start, maxLen);   // even
        }
        return s.substr(start, maxLen);
    }

    void expand(string &s, int l, int r, int &start, int &maxLen) {
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            if(r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
    }
};